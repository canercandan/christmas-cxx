/*
** Jouet.h for Jouet in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 15:21:31 2008 caner candan
** Last update Sat May 24 15:29:45 2008 caner candan
*/

#ifndef __JOUET_H__
#define __JOUET_H__

#include <iostream>
#include "Objet.h"

class	Jouet : public Objet
{
 public:
  Jouet();
  Jouet(const std::string& name);
  virtual ~Jouet();
  Jouet&	operator=(Jouet& j);
 protected:
  std::string	_name;
};

#endif
