//
// TapisRoulantDef.cpp for TapisRoulantDef in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 09:44:12 2008 caner candan
// Last update Sun May 25 14:35:29 2008 caner candan
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "TapisRoulantDef.h"
#include "ITapisRoulant.h"
#include "Objet.h"
#include "Nounours.h"
#include "PetitPoney.h"
#include "Carton.h"
#include "PapierCadeau.h"

using namespace std;

TapisRoulantDef::TapisRoulantDef()
  : _objet(NULL)
{}

TapisRoulantDef::TapisRoulantDef(Objet *objet)
  : _objet(objet)
{}

TapisRoulantDef::TapisRoulantDef(const TapisRoulantDef& t)
  : ITapisRoulant(), _objet(t._objet)
{}

TapisRoulantDef::~TapisRoulantDef()
{}

TapisRoulantDef&	TapisRoulantDef::operator=(const TapisRoulantDef& t)
{
  if (this != &t)
    this->_objet = t._objet;
  return (*this);
}

ostream&	operator<<(ostream& os, TapisRoulantDef& t)
{
  try
    {
      if (!t.getObjet())
	throw true;
      cout << t.getObjet()->getName() << " has been send to PePeNoel";
      t.setObjet(NULL);
    }
  catch (bool)
    {
      cout << "operator<< impossible: object not found";
    }
  return (os);
}

void	operator>>(Objet *o, TapisRoulantDef& t)
{
  try
    {
      if (t.getObjet())
	throw true;
      t.setObjet(o);
    }
  catch (bool)
    {
      cout << "operator>> impossible: object found" << endl;
    }
}

Objet	*TapisRoulantDef::Regarder() const
{
  try
    {
      if (this->isEmpty())
	throw true;
    }
  catch (bool)
    {
      cout << "Regarder impossible: TapisRoulantPePeNoel is empty" << endl;
      return (NULL);
    }
  return (this->_objet);
}

void	TapisRoulantDef::setObjet(Objet *o)
{
  this->_objet = o;
}

void	TapisRoulantDef::setObjet()
{
  try
    {
      if (this->_objet != NULL)
	throw true;
        int	aleat;
	srandom(time(NULL));
	switch (aleat = random() % 4)
	  {
	  case 0:
	    setObjet(new Nounours("Bisousnours"));
	    break;
	  case 1:
	    setObjet(new PetitPoney("PetitPoney"));
	    break;
	  case 2:
	    setObjet(new PapierCadeau);
	    break;
	  case 4:
	    setObjet(new Carton);
	    break;
	  }
    }
  catch (bool)
    {
      cout << "TapisRoulantDef::setObjet: impossible tapis full" << endl;
    }
}

Objet	*TapisRoulantDef::getObjet(void)
{
  return (this->_objet);
}

bool	TapisRoulantDef::isEmpty(void) const
{
  if (!this->_objet)
    return (true);
  return (false);
}
