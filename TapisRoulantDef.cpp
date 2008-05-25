//
// TapisRoulantDef.cpp for TapisRoulantDef in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 09:44:12 2008 caner candan
// Last update Sun May 25 09:51:20 2008 caner candan
//

#include "TapisRoulantDef.h"

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
    }
  return (this->_emballage);
}

void	TapisRoulantDef::setEmballage(Emballage *e)
{
  this->_emballage = e;
}

bool	TapisRoulantDef::isEmpty(void) const
{
  if (!this->_emballage)
    return (true);
  return (false);
}
