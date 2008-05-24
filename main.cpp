#include <iostream>
#include "Objet.h"
#include "PetitPoney.h"

using namespace std;

int	main(void)
{
  Objet	**tab;

  tab = Objet::MesTestUnitaires();
  //cout << ((PetitPoney*) tab[0])->_name << endl;
}
