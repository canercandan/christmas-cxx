//
// TapisRoulantPePeNoel.cpp for TapisRoulantPePeNoel in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 22:33:31 2008 caner candan
// Last update Sun May 25 13:50:35 2008 caner candan
//

#include <iostream>
#include "TapisRoulantPePeNoel.h"
#include "ITapisRoulant.h"
#include "Emballage.h"
#include "PapierCadeau.h"

using namespace std;

TapisRoulantPePeNoel::TapisRoulantPePeNoel()
  : TapisRoulantDef(new PapierCadeau)
{}

TapisRoulantPePeNoel::TapisRoulantPePeNoel(const TapisRoulantPePeNoel& t)
  : TapisRoulantDef(t._objet)
{}

TapisRoulantPePeNoel::~TapisRoulantPePeNoel()
{}

TapisRoulantPePeNoel&	TapisRoulantPePeNoel::operator=(const TapisRoulantPePeNoel& t)
{
  if (this != &t)
    this->_objet = t._objet;
  return (*this);
}

ITapisRoulant	*TapisRoulantPePeNoel::creerTapisRoulant(void)
{
  return (new TapisRoulantPePeNoel);
}
