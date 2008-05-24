/*
** ITapisRoulant.h for ITapisRoulant in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 20:15:51 2008 caner candan
** Last update Sat May 24 20:49:17 2008 caner candan
*/

#ifndef __ITAPISROULANT_H__
# define __ITAPISROULANT_H__

# include <iostream>
# include "Emballage.h"

using namespace std;

class	ITapisRoulant
{
 public:
  virtual ~ITapisRoulant();

  virtual static ITapisRoulant	*CreerTapisRoulant(void) const = 0;

  virtual friend void	operator<<(ostream& os, ITapisRoulant& t) = 0;
  virtual friend void	operator>>(Emballage& e, ITapisRoulant& t) = 0;

  virtual Emballage*	Regarder() const = 0;
};

#endif /* !__ITAPISROULANT_H__ */
