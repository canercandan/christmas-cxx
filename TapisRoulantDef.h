/*
** TapisRoulantDef.h for TapisRoulantDef in /home/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun May 25 09:45:21 2008 caner candan
** Last update Sun May 25 13:07:35 2008 caner candan
*/

#ifndef __TAPISROULANTDEF__
# define __TAPISROULANTDEF__

# include <iostream>
# include "ITapisRoulant.h"

using namespace std;

class	TapisRoulantDef : public ITapisRoulant
{
 public:
  TapisRoulantDef();
  TapisRoulantDef(Emballage *emballage);
  TapisRoulantDef(const TapisRoulantDef& t);
  virtual ~TapisRoulantDef();
  TapisRoulantDef&	operator=(const TapisRoulantDef& t);

  friend ostream&	operator<<(ostream& os, ITapisRoulant& t);
  friend void		operator>>(Emballage *e, ITapisRoulant& t);

  virtual Emballage	*Regarder() const;
  virtual void		setEmballage(Emballage *e);
  virtual Emballage	*getEmballage(void);
  virtual bool		isEmpty(void) const;
 protected:
  Emballage	*_emballage;
};

#endif /* !__TAPISROULANTDEF__ */
