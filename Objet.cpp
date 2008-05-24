//
// Objet.cpp for Objet in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 15:22:15 2008 caner candan
// Last update Sat May 24 16:34:31 2008 julian kirtz
//

#include "Objet.h"
//#include "Emballage.h"
#include "Carton.h"
#include "PapierCadeau.h"
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

Objet*		Objet::MesTestUnitaires(Objet **o)
{
  static_cast<Carton*>(o[1])->emballerEmballage(o[0]);
  static_cast<PapierCadeau*>(o[2])->emballerEmballage(o[1]);
  return (o[2]);
}
