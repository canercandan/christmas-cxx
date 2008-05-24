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
