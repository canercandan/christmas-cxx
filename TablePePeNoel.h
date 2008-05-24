#ifndef __TABLEPEPENOEL_H__
#define __TABLEPEPENOEL_H__

#include "Objet.h"

class	TablePePeNoel : public ITable
{
 public:
  TablePePeNoel();
  ~TablePePeNoel();
  TablePePeNoel(const TablePePeNoel& t);
  TablePePeNoel&	operator=(const TablePePeNoel& t);
  void		Poser(const Objet *o);
  Objet*	Prendre(const std::string& name);
  Objet*	Prendre(const int pos);
  std::string*	Regarder();
 private:
  Objet*	_tab[11];
  int		_nbObj;
};
