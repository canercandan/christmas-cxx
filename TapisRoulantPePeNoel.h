/*
** TapisRoulantPePeNoel.h for TapisRoulantPePeNoel in /home/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 22:30:32 2008 caner candan
** Last update Sun May 25 08:07:53 2008 caner candan
*/

#ifndef __TAPISROULANTPEPENOEL_H__
# define __TAPISROULANTPEPENOEL_H__

# include <iostream>
# include "ITapisRoulant.h"
# include "Emballage.h"

using namespace std;

class	TapisRoulantPePeNoel : public ITapisRoulant
{
 public:
  TapisRoulantPePeNoel();
  ~TapisRoulantPePeNoel();

  static ITapisRoulant	*creerTapisRoulant(void);

  friend ostream&	operator<<(ostream& os, TapisRoulantPePeNoel& t);
  friend void		operator>>(Emballage *e, TapisRoulantPePeNoel& t);

  virtual Emballage	*Regarder() const;
  virtual void		setEmballage(Emballage *e);
 private:
  Emballage	*_emballage;
};

#endif /* !__TAPISROULANTPEPENOEL_H__ */
