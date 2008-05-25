//
// TapisRoulantDef.cpp for TapisRoulantDef in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 09:44:12 2008 caner candan
// Last update Sun May 25 13:10:11 2008 caner candan
//

#include <iostream>
#include "TapisRoulantDef.h"
#include "ITapisRoulant.h"

using namespace std;

TapisRoulantDef::TapisRoulantDef()
  : _emballage(NULL)
{}

TapisRoulantDef::TapisRoulantDef(Emballage *emballage)
  : _emballage(emballage)
{}

TapisRoulantDef::TapisRoulantDef(const TapisRoulantDef& t)
  : ITapisRoulant(), _emballage(t._emballage)
{}

TapisRoulantDef::~TapisRoulantDef()
{}

TapisRoulantDef&	TapisRoulantDef::operator=(const TapisRoulantDef& t)
{
  if (this != &t)
    this->_emballage = t._emballage;
  return (*this);
}

ostream&	operator<<(ostream& os, TapisRoulantDef& t)
{
  try
    {
      if (!t.getEmballage())
	throw true;
      cout << t.getEmballage()->getName() << " has been send to PePeNoel";
      t.setEmballage(NULL);
    }
  catch (bool)
    {
      cout << "operator<< impossible: object not found";
    }
  return (os);
}

void	operator>>(Emballage *e, TapisRoulantDef& t)
{
  try
    {
      if (t.getEmballage())
	throw true;
      t.setEmballage(e);
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

void	TapisRoulantDef::setEmballage(Emballage *e)
{
  this->_emballage = e;
}

Emballage	*TapisRoulantDef::getEmballage(void)
{
  return (this->_emballage);
}

bool	TapisRoulantDef::isEmpty(void) const
{
  if (!this->_emballage)
    return (true);
  return (false);
}
