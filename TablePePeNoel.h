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

  static ITable		*creerTable(void);

  virtual void		Poser(Objet *o);
  virtual Objet*	Prendre(const std::string& name);
  virtual Objet*	Prendre(const int pos);
  virtual std::string**	Regarder() const;
  virtual bool		isEmpty(void) const;
 private:
  Objet*	_tab[11];
  int		_nbObj;
};

#endif /* !__TABLEPEPENOEL_H__ */
