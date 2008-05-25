//
// TableAleat.cpp for TableAleat in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 10:27:05 2008 caner candan
// Last update Sun May 25 15:07:39 2008 julian kirtz
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
  int			i;

  srandom(time(NULL));
  for (i = 0; i < 9; i++)
    switch ((random() % 4))
      {
      case 0:
	Poser(new PapierCadeau);
	break;
      case 1:
	Poser(new Carton);
	break;
      case 2:
	Poser(new Nounours("Bisousnours"));
	break;
      case 3:
	Poser(new PetitPoney("PetitPoney"));
	break;
      }
  _tab[i] = NULL;
}

TableAleat::TableAleat(const TableAleat& t)
  : TableDef(t._tab, t._nbObj)
{}

TableAleat::~TableAleat()
{}
