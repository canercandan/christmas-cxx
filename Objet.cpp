#include "Objet.h"
#include "PetitPoney.h"
#include "Nounours.h"

Objet::Objet()
{}

Objet::~Objet()
{}

Objet::Objet(const Objet& o)
{
  (void) o;
}

Objet&		Objet::operator=(const Objet& o)
{
  if (this != &o)
    {}
  return (*this);
}

Objet**		Objet::MesTestUnitaires()
{
  Objet**	tab = new Objet*[2];

  tab[0] = new PetitPoney("poney gay");
  tab[1] = new Nounours("bisounours");
  return (tab);
}
