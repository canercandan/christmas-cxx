//
// TapisRoulantPePeNoel.cpp for TapisRoulantPePeNoel in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sat May 24 22:33:31 2008 caner candan
// Last update Sun May 25 09:51:25 2008 caner candan
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

ITapisRoulant	*TapisRoulantDef::creerTapisRoulant(void)
{
  ITapisRoulant	*itr;

  itr = new TapisRoulantPePeNoel;
  return (itr);
}
