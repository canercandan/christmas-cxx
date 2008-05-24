#include <iostream>
#include "Objet.h"
#include "Carton.h"
#include "PapierCadeau.h"
#include "PetitPoney.h"
#include "Nounours.h"
#include "TablePePeNoel.h"

using namespace std;

int	main(void)
{
  Objet	**tab;
  Carton	c;
  Objet	*n;
  PetitPoney	p("coucou");
  PapierCadeau	pc;
  Objet		*objet[] = {&p, &c, NULL};
  TablePePeNoel	toto;

  tab = Objet::MesTestUnitaires();
  c.fermerCarton();
  c.fermerCarton();
  c.emballerEmballage(tab[0]);
  n = c.ouvrirEmballage();
  Objet::MesTestUnitaires(objet);
}
