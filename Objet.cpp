//
// Objet.cpp for Objet in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 15:22:15 2008 caner candan
// Last update Sun May 25 12:46:28 2008 caner candan
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
  : _objet(NULL)
{}

Objet::Objet(const string& name, Objet *objet)
  : _name(name), _objet(objet)
{}

Objet::~Objet()
{}

Objet::Objet(const Objet& o)
  : _name(o._name), _objet(o._objet)
{}

Objet&	Objet::operator=(const Objet& o)
{
  if (this != &o)
    {
      this->_name = o._name;
      this->_objet = o._objet;
    }
  return (*this);
}

Objet	**Objet::MesTestUnitaires()
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

Objet	*Objet::MesTestUnitaires(Objet **o)
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

const string&	Objet::getName() const
{
  return (this->_name);
}

Objet	*Objet::getObjet() const
{
  return (this->_objet);
}
