#include <iostream>
#include "PetitPoney.h"

PetitPoney::PetitPoney(const std::string& name)
  : Jouet(name)
{
}

PetitPoney::~PetitPoney()
{
}

PetitPoney::PetitPoney(const PetitPoney& p)
  : Jouet(p._name)
{
}

PetitPoney&	PetitPoney::operator=(const PetitPoney& p)
{
  if (this != &p)
    this->_name = p._name;
  return (*this);
}

void		PetitPoney::estPris()
{
  std::cout << "yo man" << std::endl;
}
