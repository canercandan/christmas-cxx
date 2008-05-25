//
// Emballage.cpp for Emballage in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 14:09:36 2008 caner candan
// Last update Sun May 25 12:50:41 2008 caner candan
//

#include <iostream>
#include "Emballage.h"
#include "Objet.h"

using namespace std;

Emballage::Emballage()
  : _isempty(true), _isopen(true)
{}

Emballage::Emballage(bool isempty, bool isopen)
  : _isempty(isempty), _isopen(isopen)
{}

Emballage::Emballage(Emballage& e)
  : Objet(e._name, e._objet), _isempty(e._isempty), _isopen(e._isopen)
{}

Emballage::~Emballage()
{}

Emballage&	Emballage::operator=(Emballage& e)
{
  if (this != &e)
    {
      this->_isempty = e._isempty;
      this->_isopen = e._isopen;
      this->_objet = e._objet;
    }
  return (*this);
}

void	Emballage::estPris()
{
  cout << "sifflet en travaillant" << endl;
}

void	Emballage::emballerEmballage(Objet *o)
{
  try
    {
      if (!this->_isopen)
	throw 1;
      if (!this->_isempty)
	throw 2;
      this->_isempty = false;
      this->_isopen = false;
      this->_objet = o;
      cout << "tuuuut tuuut tuut" << endl;
    }
  catch (int e)
    {
      cout << "emballerEmballage impossible: ";
      if (e == 1)
	cout << "closed" << endl;
      else if (e == 2)
	cout << "filled" << endl;	
    }
}

Objet	*Emballage::ouvrirEmballage()
{
  try
    {
      if (this->_isopen)
	throw 1;
      if (this->_objet == NULL && !this->_isempty)
	throw 2;
      this->_isopen = true;
      this->_isempty = true;
    }
  catch(int t)
    {
      cout << "ouvrirEmballage: ";
      if (t == 1)
	cout << "already opened" << endl;
      else if (t == 2)
	cout << "object not found" << endl;
      return (NULL);
    }
  return (this->_objet);
}
