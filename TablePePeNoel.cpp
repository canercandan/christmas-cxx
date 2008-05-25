//
// TablePePeNoel.cpp for TablePePeNoel in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 07:03:00 2008 caner candan
// Last update Sun May 25 13:23:03 2008 caner candan
//

#include "TablePePeNoel.h"
#include "ITable.h"
#include "TableDef.h"
#include "Carton.h"
#include "Nounours.h"
#include "PetitPoney.h"

TablePePeNoel::TablePePeNoel()
{
  Poser(new Carton);
  Poser(new Carton);
  Poser(new Nounours("Bisounours"));
  Poser(new PetitPoney("Pirate"));
}

TablePePeNoel::TablePePeNoel(const TablePePeNoel& t)
  : TableDef(t._tab, t._nbObj)
{}

TablePePeNoel::~TablePePeNoel()
{}

ITable	*TablePePeNoel::creerTable(void)
{
  return (new TablePePeNoel);
}
