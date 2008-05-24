#include <iostream>
#include "PetitPoney.h"

PetitPoney::PetitPoney(const std::string& name)
{
  this->_name = name;
}

PetitPoney::~PetitPoney()
{
}

PetitPoney::PetitPoney(const PetitPoney& p)
{
}

PetitPoney&	PetitPoney::operator=(const PetitPoney& p)
{
  if (this != &p)
    {
    }
  return *this;
}

void		PetitPoney::estPris()
{
  std::cout << "yo man" << std::endl;
}
