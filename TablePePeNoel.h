#ifndef __TABLEPEPENOEL_H__
#define __TABLEPEPENOEL_H__

#include "ITable.h"
#include "Objet.h"

class	TablePePeNoel : public ITable
{
 public:
  TablePePeNoel();
  ~TablePePeNoel();
  TablePePeNoel(const TablePePeNoel& t);
  TablePePeNoel&	operator=(const TablePePeNoel& t);

  //virtual static ITable	*CreerTable(void) const;
  virtual void		Poser(Objet *o);
  virtual Objet*	Prendre(const std::string& name);
  virtual Objet*	Prendre(const int pos);
  virtual std::string*	Regarder() const;
 private:
  Objet*	_tab[11];
  int		_nbObj;
};

#endif /* !__TABLEPEPENOEL_H__ */
