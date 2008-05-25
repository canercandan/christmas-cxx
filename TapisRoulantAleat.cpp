//
// TapisRoulantAleat.cpp for TapisRoulantAleat in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 09:54:27 2008 caner candan
// Last update Sun May 25 13:01:36 2008 caner candan
//

#include <cstdlib>
#include <ctime>
#include "TapisRoulantAleat.h"
#include "PapierCadeau.h"
#include "Carton.h"

TapisRoulantAleat::TapisRoulantAleat()
{
  srandom(time(NULL));
  if ((random() % 2))
    setEmballage(new PapierCadeau);
  else
    setEmballage(new Carton);
}

TapisRoulantAleat::TapisRoulantAleat(const TapisRoulantAleat& t)
  : TapisRoulantDef(t._emballage)
{}

TapisRoulantAleat::~TapisRoulantAleat()
{}

TapisRoulantAleat&	TapisRoulantAleat::operator=(const TapisRoulantAleat& t)
{
  if (this != &t)
    this->_emballage = t._emballage;
  return (*this);
}
