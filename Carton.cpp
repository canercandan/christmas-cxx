//
// Carton.cpp for Carton in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 14:47:48 2008 caner candan
// Last update Sun May 25 07:49:49 2008 caner candan
//

#include <iostream>
#include "Carton.h"
#include "Emballage.h"

using namespace std;

Carton::Carton()
{
  _name = "Carton";
}

Carton::Carton(Carton& c)
  : Emballage(c._isempty, c._isopen, c._objet)
{
  _name = c._name;
}

Carton::~Carton()
{}

Carton&	Carton::operator=(Carton& c)
{
  if (this != &c)
    {
      this->_isempty = c._isempty;
      this->_isopen = c._isopen;
      this->_objet = c._objet;
    }
  return (*this);
}

void	Carton::fermerCarton()
{
  try
    {
      exception	e;

      if (!this->_isopen)
	throw true;
      this->_isopen = false;
    }
  catch (bool)
    {
      cout << "fermerCarton impossible: already closed" << endl;
    }
}
