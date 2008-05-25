//
// PapierCadeau.cpp for PapierCadeau in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 14:52:18 2008 caner candan
// Last update Sun May 25 07:50:08 2008 caner candan
//

#include "PapierCadeau.h"

PapierCadeau::PapierCadeau()
{
  _name = "PapierCadeau";
}

PapierCadeau::PapierCadeau(PapierCadeau& p)
  : Emballage(p._isempty, p._isopen, p._objet)
{
  _name = p._name;
}

PapierCadeau::~PapierCadeau()
{}

PapierCadeau&	PapierCadeau::operator=(PapierCadeau& p)
{
  if (this != &p)
    {
      this->_isempty = p._isempty;
      this->_isopen = p._isopen;
      this->_objet = p._objet;
    }
  return (*this);
}
