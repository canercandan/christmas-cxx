//
// TapisRoulantDef.cpp for TapisRoulantDef in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 09:44:12 2008 caner candan
// Last update Sun May 25 13:49:50 2008 caner candan
//

#include <iostream>
#include "TapisRoulantDef.h"
#include "ITapisRoulant.h"

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

void	operator>>(Object *o, TapisRoulantDef& t)
{
  try
    {
      if (t.getObjet())
	throw true;
      t.setObjet(e);
    }
  catch (bool)
    {
      cout << "operator>> impossible: object found" << endl;
    }
}

Emballage	*TapisRoulantDef::Regarder() const
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
  return (this->_emballage);
}

void	TapisRoulantDef::setObjet(Object *o)
{
  this->_objet = o;
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
