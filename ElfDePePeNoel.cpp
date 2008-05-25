//
// ElfDePePeNoel.cpp for ElfDePePeNoel in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 08:34:54 2008 caner candan
// Last update Sun May 25 12:41:34 2008 caner candan
//

#include <string>
#include "ElfDePePeNoel.h"
#include "IElf.h"
#include "TablePePeNoel.h"
#include "TapisRoulantPePeNoel.h"

using namespace std;

ElfDePePeNoel::ElfDePePeNoel()
  : _table(new TablePePeNoel), _tapis(new TapisRoulantPePeNoel)
{}

ElfDePePeNoel::ElfDePePeNoel(TablePePeNoel *table,
			     TapisRoulantPePeNoel *tapis)
  : _table(table), _tapis(tapis)
{}

ElfDePePeNoel::ElfDePePeNoel(ElfDePePeNoel& e)
  : IElf(), _table(e._table), _tapis(e._tapis)
{}

ElfDePePeNoel::~ElfDePePeNoel()
{}

ElfDePePeNoel&	ElfDePePeNoel::operator=(ElfDePePeNoel& e)
{
  if (this != &e)
    {
      this->_table = e._table;
      this->_tapis = e._tapis;
    }
  return (*this);
}

string		*ElfDePePeNoel::_getStringObject(const string& name) const
{
  string	**tab;
  int		i;
  int		max;

  tab = this->_table->Regarder();
  max = this->_table->getNbObj();
  for (i = 0; i < max; i++)
    if (&name == tab[i])
      return (tab[i]);
    else if (name == "Jouet" && *tab[i] != "Carton" &&
	     *tab[i] != "PapierCadeau")
      return (tab[i]);
  return (NULL);
}

void	ElfDePePeNoel::emballerCadeau(void)
{
  Objet	*objet[] = {this->_table->Prendre(*_getStringObject("Jouet")),
		    this->_table->Prendre(*_getStringObject("Carton")),
		    this->_table->Prendre(*_getStringObject("PapierCadeau"))};

  try
    {
      if (this->_table->isEmpty())
	throw 1;
      if (this->_tapis->isEmpty())
	throw 2;
      Objet::MesTestUnitaires(objet);
    }
  catch (int e)
    {
      if (e == 1)
	cout << "emballerCadeau impossible: TablePePeNoel is empty" << endl;
      else if (e == 2)
	cout << "emballerCadeau impossible: TapisRoulantPePeNoel "
	     << "is empty" << endl;
    }
}
