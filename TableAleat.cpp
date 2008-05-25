//
// TableAleat.cpp for TableAleat in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 10:27:05 2008 caner candan
// Last update Sun May 25 13:19:26 2008 caner candan
//

#include <sstream>
#include <cstdlib>
#include <ctime>
#include "TableAleat.h"
#include "TableDef.h"
#include "PapierCadeau.h"
#include "Carton.h"
#include "Nounours.h"
#include "PetitPoney.h"

TableAleat::TableAleat()
{
  std::ostringstream	nameJouet;
  int			i;

  _nbObj = 9;
  srandom(time(NULL));
  for (i = 0; i < _nbObj; i++)
    switch ((random() % 4))
      {
      case 0:
	Poser(new PapierCadeau);
	break;
      case 1:
	Poser(new Carton);
	break;
      case 2:
	nameJouet.clear();
	nameJouet << "Bisousnours" << i;
	Poser(new Nounours(nameJouet.str()));
	break;
      case 3:
	nameJouet.clear();
	nameJouet << "PetitPoney" << i;
	Poser(new PetitPoney(nameJouet.str()));
	break;
      }
  _tab[i] = NULL;
}

TableAleat::TableAleat(const TableAleat& t)
  : TableDef(t._tab, t._nbObj)
{}

TableAleat::~TableAleat()
{}
