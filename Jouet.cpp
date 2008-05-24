#include "Jouet.h"

Jouet::Jouet()
{}

Jouet::Jouet(const std::string& name)
  : _name(name)
{}

Jouet::~Jouet()
{}

Jouet&	Jouet::operator=(Jouet& j)
{
  if (this != &j)
    this->_name = j._name;
  return (*this);
}
