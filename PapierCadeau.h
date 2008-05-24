/*
** PapierCadeau.h for PapierCadeau in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 14:19:29 2008 caner candan
** Last update Sat May 24 14:52:05 2008 caner candan
*/

#ifndef __PAPIERCADEAU_H__
# define __PAPIERCADEAU_H__

# include "Emballage.h"

class	PapierCadeau : public Emballage
{
 public:
  PapierCadeau();
  PapierCadeau(PapierCadeau& p);
  ~PapierCadeau();
  PapierCadeau&	operator=(PapierCadeau& p);
};

#endif /* !__PAPIERCADEAU_H__ */
