#include <sstream>
#include <stdlib>
#include <time>
#include "TableAleat.h"
#include "PapierCadeau.h"
#include "Carton.h"
#include "Nounours.h"
#include "PetitPoney.h"

TableAleat::TableAleat()
{
  int	aleat;
  _nbObj = 9;
  std::ostringstream	nameJouet;
  srandom(time(NULL));
  for (int i = 0; i < _nbObj; i++)
    switch (aleat = random() % 4)
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
	Poser(new PetiPoney(nameJouet.str()));
	break;
      }
  _tab[i] = NULL;
}

TableAleat::~TableAleat()
{
}
