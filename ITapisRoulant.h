/*
** ITapisRoulant.h for ITapisRoulant in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 20:15:51 2008 caner candan
** Last update Sun May 25 14:32:21 2008 caner candan
*/

#ifndef __ITAPISROULANT_H__
# define __ITAPISROULANT_H__

# include "Objet.h"

class	ITapisRoulant
{
 public:
  virtual ~ITapisRoulant(){}

  virtual Objet		*Regarder(void) const = 0;
  virtual void		setObjet(Objet *o) = 0;
  virtual void		setObjet(void) = 0;
  virtual Objet		*getObjet() = 0;
  virtual bool		isEmpty(void) const = 0;
};

#endif /* !__ITAPISROULANT_H__ */
