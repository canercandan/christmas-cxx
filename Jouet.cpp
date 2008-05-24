#include "Jouet.h"

Jouet::Jouet()
{
}

Jouet::Jouet(const std::string& name)
  : _name(name)
{
}

Jouet::~Jouet()
{
}

Jouet::Jouet(const Jouet& j)
{
}

Jouet&	Jouet::operator=(const Jouet& j)
{
  if (this != &j)
    {
    }
  return *this;
}
