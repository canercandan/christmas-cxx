//
// Emballage.cpp for Emballage in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 14:09:36 2008 caner candan
// Last update Sat May 24 15:35:30 2008 caner candan
//

#include <iostream>
#include "Emballage.h"

using namespace std;

Emballage::Emballage()
  : _isempty(true), _isopen(true)
{}

Emballage::Emballage(bool isempty, bool isopen)
  : _isempty(isempty), _isopen(isopen)
{}

Emballage::Emballage(Emballage& e)
  : _isempty(e._isempty), _isopen(e._isopen)
{}

Emballage::~Emballage()
{}

Emballage&	Emballage::operator=(Emballage& e)
{
  if (this != &e)
    {
      this->_isempty = e._isempty;
      this->_isopen = e._isopen;
    }
  return (*this);
}

void	Emballage::estPris()
{
  if (this->_isopen && this->_isempty != false)
    cout << "sifflet en travaillant" << endl;
}

void	Emballage::emballerEmballage()
{
  if (this->_isopen && this->_isempty)
    {
      this->_isempty = false;
      this->_isopen = false;
      cout << "tuuuut tuuut tuut" << endl;
    }
}

void	Emballage::ouvrirEmballage()
{
  this->_isopen = true;
}
