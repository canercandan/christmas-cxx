#include "Objet.h"

Objet::Objet()
{
}

Objet::~Objet()
{
}

Objet::Objet(const Objet& o)
{
}

Objet&		Objet::operator=(const Objet& o)
{
  if (this != &o)
    {
    }
  return *this;
}

Objet**		Objet::MesTestUnitaires()
{
  Objet**	tab = new Objet*[2];
  
}
