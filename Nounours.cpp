#include <iostream>
#include "Nounours.h"

Nounours::Nounours(const std::string& name)
{
  this->_name = name;
}

Nounours::~Nounours()
{
}

Nounours::Nounours(const Nounours& n)
{
}

Nounours&	Nounours::operator=(const Nounours& n)
{
  if (this != &n)
    {
    }
  return *this;
}

void		Nounours::estPris()
{
  std::cout << "gra hu" << std::endl;
}
