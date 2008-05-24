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
  : Jouet(p._name), _estpris(p._estpris)
{
}

PetitPoney&	PetitPoney::operator=(const PetitPoney& p)
{
  if (this != &p)
    {
      this->_name = p._name;
      this->_estpris = p._estpris;
    }
  return (*this);
}

void		PetitPoney::estPris()
{
  std::cout << "yo man" << std::endl;
}
