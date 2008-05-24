#include <iostream>
#include "Objet.h"
#include "Carton.h"
#include "PetitPoney.h"
#include "Nounours.h"

using namespace std;

int	main(void)
{
  Objet	**tab;
  Carton	c;
  Objet	*n;

  tab = Objet::MesTestUnitaires();
  //cout << ((PetitPoney*) tab[0])->_name << endl;
  c.fermerCarton();
  c.fermerCarton();
  c.emballerEmballage(tab[0]);
  n = c.ouvrirEmballage();
}
