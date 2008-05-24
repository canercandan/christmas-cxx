#include <iostream>
#include "Nounours.h"

Nounours::Nounours(const std::string& name)
  : _name(name), _estpris(false)
{
}

Nounours::~Nounours()
{
}

Nounours::Nounours(const Nounours& n)
  : _name(n._name), _estpris(n._estpris)
{
}

Nounours&	Nounours::operator=(const Nounours& n)
{
  if (this != &n)
    {
      this->_name = n._name;
      this->_estpris = n._estpris;
    }
  return (*this);
}

void		Nounours::estPris()
{
  std::cout << "gra hu" << std::endl;
}
