//
// Nounours.cpp for Nounours in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 15:21:47 2008 caner candan
// Last update Sat May 24 15:21:48 2008 caner candan
//

#include <iostream>
#include "Nounours.h"
#include "Jouet.h"

Nounours::Nounours(const std::string& name)
  
: Jouet(name)
{}

Nounours::~Nounours()
{}

Nounours::Nounours(const Nounours& n)
  : Jouet(n._name)
{}

Nounours&	Nounours::operator=(const Nounours& n)
{
  if (this != &n)
    this->_name = n._name;
  return (*this);
}

void		Nounours::estPris()
{
  std::cout << "gra hu" << std::endl;
}
