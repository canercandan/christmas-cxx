/*
** ITable.h for ITable in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 20:04:29 2008 caner candan
** Last update Sat May 24 20:48:41 2008 caner candan
*/

#ifndef __ITABLE_H__
# define __ITABLE_H__

# include <iostream>
# include "Objet.h"

using namespace std;

class	ITable
{
 public:
  virtual ~ITable();

  virtual static ITable	*CreerTable(void) const = 0;

  virtual void		Poser(const Objet *o) = 0;
  virtual Objet		*Prendre(const string& name) = 0;
  virtual Objet		*Prendre(const int pos) = 0;
  virtual string	*Regarder() const = 0;
}

#endif /* !__ITABLE_H__ */
