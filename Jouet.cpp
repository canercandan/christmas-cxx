#include "Jouet.h"

Jouet::Jouet()
  : _estpris(false)
{}

Jouet::Jouet(const std::string& name)
  : _name(name), _estpris(false)
{}

Jouet::~Jouet()
{}

Jouet&	Jouet::operator=(Jouet& j)
{
  if (this != &j)
    {
      this->_name = j._name;
      this->_estpris = j._estpris;
    }
  return (*this);
}
