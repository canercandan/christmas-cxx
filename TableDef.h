/*
** TableDef.h for TableDef in /home/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun May 25 10:23:48 2008 caner candan
** Last update Sun May 25 12:58:31 2008 caner candan
*/

#ifndef __TABLEDEF_H__
# define __TABLEDEF_H__

# include <string>
# include "ITable.h"
# include "Objet.h"

class	TableDef : public ITable
{
 public:
  TableDef();
  TableDef(Objet* const* tab, int nbObj);
  TableDef(const TableDef& t);
  ~TableDef();
  TableDef&	operator=(const TableDef& t);

  virtual void		Poser(Objet *o);
  virtual Objet		*Prendre(const std::string& name);
  virtual Objet		*Prendre(const int pos);
  virtual std::string	**Regarder() const;
  virtual bool		isEmpty(void) const;
  virtual int		getNbObj(void) const;
 protected:
  Objet	*_tab[11];
  int	_nbObj;
};

#endif /* !__TABLEDEF_H__ */
