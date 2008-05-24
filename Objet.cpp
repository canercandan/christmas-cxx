//
// Objet.cpp for Objet in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 15:22:15 2008 caner candan
// Last update Sat May 24 19:07:53 2008 caner candan
//

#include <iostream>
#include <exception>
#include "Objet.h"
#include "Carton.h"
#include "PapierCadeau.h"
#include "PetitPoney.h"
#include "Nounours.h"

using namespace std;

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
  try
    {
      Objet**	tab;

      tab = new Objet*[2];
      tab[0] = new PetitPoney("poney gay");
      tab[1] = new Nounours("bisounours");
      return (tab);
    }
  catch (bad_alloc& e)
    {
      cout << "Bad Alloc in Objet::MesTestUnitaires(): "
	   << e.what() << endl;
      return (NULL);
    }
}

Objet*	Objet::MesTestUnitaires(Objet **o)
{
  try
    {
      int	i;

      for (i = 0; o[i]; i++);
      if (i != 3)
	throw i;
      static_cast<Carton*>(o[1])->emballerEmballage(o[0]);
      static_cast<PapierCadeau*>(o[2])->emballerEmballage(o[1]);
    }
  catch (int e)
    {
      cout << "MesTestUnitaires impossible: "
	   << e << " != 3" << endl;
      return (NULL);
    }
  return (o[2]);
}
