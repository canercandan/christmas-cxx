//
// TapisRoulantPePeNoel.cpp for TapisRoulantPePeNoel in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 22:33:31 2008 caner candan
// Last update Sun May 25 09:07:56 2008 caner candan
//

#include <iostream>
#include "TapisRoulantPePeNoel.h"
#include "ITapisRoulant.h"
#include "Emballage.h"
#include "PapierCadeau.h"

using namespace std;

TapisRoulantPePeNoel::TapisRoulantPePeNoel()
  : _emballage(new PapierCadeau)
{}

TapisRoulantPePeNoel::~TapisRoulantPePeNoel()
{}

ITapisRoulant	*TapisRoulantPePeNoel::creerTapisRoulant(void)
{
  ITapisRoulant	*itr;

  itr = new TapisRoulantPePeNoel;
  return (itr);
}

ostream&	operator<<(ostream& os, TapisRoulantPePeNoel& t)
{
  try
    {
      if (!t._emballage)
	throw true;
      cout << t._emballage->getName() << " has been send to PePeNoel";
      t._emballage = NULL;
    }
  catch (bool)
    {
      cout << "operator<< impossible: object not found "
	   << "in TapisRoulantPePeNoel";
    }
  return (os);
}

void		operator>>(Emballage *e, TapisRoulantPePeNoel& t)
{
  try
    {
      if (t._emballage)
	throw true;
      t.setEmballage(e);
    }
  catch (bool)
    {
      cout << "operator>> impossible: object found "
	   << "in TapisRoulantPePeNoel" << endl;
    }
}

Emballage	*TapisRoulantPePeNoel::Regarder() const
{
  try
    {
      if (this->isEmpty())
	throw true;
    }
  catch (bool)
    {
      cout << "Regarder impossible: TapisRoulantPePeNoel is empty" << endl;
    }
  return (this->_emballage);
}

void		TapisRoulantPePeNoel::setEmballage(Emballage *e)
{
  this->_emballage = e;
}

bool	TapisRoulantPePeNoel::isEmpty(void) const
{
  
}
