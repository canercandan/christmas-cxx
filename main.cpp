#include <iostream>
#include "Objet.h"
#include "Carton.h"
#include "PapierCadeau.h"
#include "PetitPoney.h"
#include "Nounours.h"
#include "TablePePeNoel.h"
#include "TapisRoulantPePeNoel.h"
#include "TableAleat.h"
#include "TapisRoulantAleat.h"
#include "ElfDePePeNoel.h"

using namespace std;

int	main(void)
{
//   //Objet	**tab;
//   Carton	c;
//   //Objet	*n;
//   PetitPoney	p("coucou");
//   PapierCadeau	pc;
//   //Objet		*objet[] = {&p, &c, NULL};
//   TablePePeNoel *tppn;
//   std::string**	tabstr;
//   int		i = 0;
//   TapisRoulantPePeNoel	*tap;

//   tppn = static_cast<TablePePeNoel*>(TablePePeNoel::creerTable());
//   tabstr = tppn->Regarder();
//   i = 0;
//   while (tabstr[i] != NULL)
//     cout << *(tabstr[i++]) << endl;
//   cout << "- fin test creer table -"<< endl;
//   tap = static_cast<TapisRoulantPePeNoel*>
//     (TapisRoulantPePeNoel::creerTapisRoulant());
//   /*
//   &c >> *tap;
//   cout << *tap << endl;
//   cout << *tap << endl;
//   tab = Objet::MesTestUnitaires();
//   c.fermerCarton();
//   c.fermerCarton();
//   c.emballerEmballage(tab[0]);
//   n = c.ouvrirEmballage();
//   Objet::MesTestUnitaires(objet);
//   */
//   cout << "- debut test creer regarder -"<< endl;
//   tppn->Poser(&p);
//   tppn->Poser(&p);
//   tabstr = tppn->Regarder();
//   i = 0;
//   while (tabstr[i] != NULL)
//     cout << *(tabstr[i++]) << endl;
//   cout << "- fin test creer regarder -"<< endl;
//   tppn->Prendre(0);
//   tppn->Prendre(1);
//   tabstr = tppn->Regarder();
//   i = 0;
//   while (tabstr[i] != NULL)
//     cout << *(tabstr[i++]) << endl;

  int		i;
  TableAleat	taleat;
  TapisRoulantAleat	tapalat;
  std::string	**tabstr;
  tabstr = taleat.Regarder();
  for (i = 0; tabstr[i] != NULL; i++)
    cout << *(tabstr[i++]) << endl;
//   ElfDePePeNoel	elf(&taleat, &tapalat);

//   elf.emballerCadeau();
}
