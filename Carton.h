/*
** Carton.h for Carton in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 14:18:15 2008 caner candan
** Last update Sat May 24 15:31:52 2008 caner candan
*/

#ifndef __CARTON_H__
# define __CARTON_H__

# include "Emballage.h"

class	Carton : public Emballage
{
 public:
  Carton();
  Carton(Carton& c);
  ~Carton();
  Carton&	operator=(Carton& e);

  // fermer carton
};

#endif /* !__CARTON_H__ */
