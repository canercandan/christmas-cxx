/*
** Nounours.h for Nounours in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 15:21:43 2008 caner candan
** Last update Sat May 24 15:21:44 2008 caner candan
*/

#ifndef __NOUNOURS_H__
#define __NOUNOURS_H__

#include "Jouet.h"

class	Nounours : public Jouet
{
 public:
  Nounours(const std::string& name);
  ~Nounours();
  Nounours(const Nounours& n);
  Nounours&	operator=(const Nounours& n);

  virtual void	estPris();
};

#endif
