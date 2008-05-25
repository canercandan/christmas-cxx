/*
** TapisRoulantPePeNoel.h for TapisRoulantPePeNoel in /home/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 22:30:32 2008 caner candan
** Last update Sun May 25 13:51:02 2008 caner candan
*/

#ifndef __TAPISROULANTPEPENOEL_H__
# define __TAPISROULANTPEPENOEL_H__

# include <iostream>
# include "TapisRoulantDef.h"
# include "ITapisRoulant.h"

using namespace std;

class	TapisRoulantPePeNoel : public TapisRoulantDef
{
 public:
  TapisRoulantPePeNoel();
  TapisRoulantPePeNoel(const TapisRoulantPePeNoel& t);
  ~TapisRoulantPePeNoel();
  TapisRoulantPePeNoel&	operator=(const TapisRoulantPePeNoel& t);

  static ITapisRoulant	*creerTapisRoulant(void);
};

#endif /* !__TAPISROULANTPEPENOEL_H__ */
