//
// ElfDePePeNoel.cpp for ElfDePePeNoel in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 08:34:54 2008 caner candan
// Last update Sun May 25 14:52:37 2008 caner candan
//

#include <string>
#include "ElfDePePeNoel.h"
#include "IElf.h"
#include "TableAleat.h"
#include "TapisRoulantAleat.h"
#include "Objet.h"

using namespace std;

ElfDePePeNoel::ElfDePePeNoel()
  : _table(new TableAleat), _tapis(new TapisRoulantAleat)
{}

ElfDePePeNoel::ElfDePePeNoel(TableAleat *table,
			     TapisRoulantAleat *tapis)
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

Objet	*ElfDePePeNoel::_getObject(const string& name) const
{
  string	**tab;
  int		i;
  int		max;

  tab = this->_table->Regarder();
  max = this->_table->getNbObj();
  for (i = 0; i < max; i++)
    {
      if (&name == tab[i])
	return (this->_table->Prendre(*tab[i]));
      else if (name == "Jouet" && *tab[i] != "Carton" &&
	       *tab[i] != "PapierCadeau")
	return (this->_table->Prendre(*tab[i]));
    }
  return (NULL);
}

Objet	*ElfDePePeNoel::emballerCadeau(void)
{
  Objet	*Jouet;
  Objet	*Carton;
  Objet	*PapierCadeau;

  try
    {
      Jouet = _getObject("Jouet");
      Carton = _getObject("Carton");
      PapierCadeau = _getObject("PapierCadeau");
      while (!Jouet && !Carton && !PapierCadeau)
	{
	  if (this->_tapis->isEmpty())
	    this->_tapis->setObjet();
	  if (this->_tapis->getObjet()->getName() == "Carton" && !Carton)
	    Carton = this->_tapis->getObjet();
	  else if (this->_tapis->getObjet()->getName() == "PapierCadeau" && !PapierCadeau)
	    PapierCadeau = this->_tapis->getObjet();
	  else if (!Jouet)
	    Jouet = this->_tapis->getObjet();
	  if (this->_table->getNbObj() < 10)
	    this->_table->Poser(this->_tapis->getObjet());
	  else
	    throw true;
	  this->_tapis->setObjet(NULL);
	}
    }
  catch (bool)
    {
      cout << "pepe ya un schmolle dans la bignou" << endl;
      exit(0);
    }

  Objet	*objet[] = {Jouet, Carton, PapierCadeau};
  return (Objet::MesTestUnitaires(objet));
}
