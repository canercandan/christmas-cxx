//
// Jouet.cpp for Jouet in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 15:21:24 2008 caner candan
// Last update Sat May 24 21:28:39 2008 caner candan
//

#include <string>
#include "Jouet.h"

Jouet::Jouet()
{}

Jouet::Jouet(const std::string& name)
  : Objet(name)
{}

Jouet::~Jouet()
{}

Jouet&	Jouet::operator=(Jouet& j)
{
  if (this != &j)
    this->_name = j._name;
  return (*this);
}
