//
// Carton.cpp for Carton in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 14:47:48 2008 caner candan
// Last update Sat May 24 15:17:56 2008 caner candan
//

#include "Carton.h"
#include "Emballage.h"

Carton::Carton()
{}

Carton::Carton(Carton& c)
  : Emballage(c._isempty, c._isopen)
{}

Carton::~Carton()
{}

Carton&	Carton::operator=(Carton& c)
{
  if (this != &c)
    {
      this->_isempty = c._isempty;
      this->_isopen = c._isopen;
    }
  return (*this);
}
