/*
** ITable.h for ITable in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 20:04:29 2008 caner candan
** Last update Sun May 25 13:17:56 2008 caner candan
*/

#ifndef __ITABLE_H__
# define __ITABLE_H__

# include <iostream>
# include "Objet.h"

using namespace std;

class	ITable
{
 public:
  virtual ~ITable(){}

  virtual void		Poser(Objet *o) = 0;
  virtual Objet		*Prendre(const string& name) = 0;
  virtual Objet		*Prendre(const int pos) = 0;
  virtual string	**Regarder() const = 0;
  virtual bool		isEmpty(void) const = 0;
  virtual int		getNbObj(void) const = 0;
};

#endif /* !__ITABLE_H__ */
