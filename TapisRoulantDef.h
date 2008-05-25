/*
** TapisRoulantDef.h for TapisRoulantDef in /home/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun May 25 09:45:21 2008 caner candan
** Last update Sun May 25 13:45:58 2008 caner candan
*/

#ifndef __TAPISROULANTDEF__
# define __TAPISROULANTDEF__

# include <iostream>
# include "ITapisRoulant.h"
# include "Objet.h"

using namespace std;

class	TapisRoulantDef : public ITapisRoulant
{
 public:
  TapisRoulantDef();
  TapisRoulantDef(Objet *objet);
  TapisRoulantDef(const TapisRoulantDef& t);
  virtual ~TapisRoulantDef();
  TapisRoulantDef&	operator=(const TapisRoulantDef& t);

  friend ostream&	operator<<(ostream& os, ITapisRoulant& t);
  friend void		operator>>(Objet *o, ITapisRoulant& t);

  virtual Objet	*Regarder() const;
  virtual void	setObjet(Objet *o);
  virtual Objet	*getObjet(void);
  virtual bool	isEmpty(void) const;
 protected:
  Objet	*_objet;
};

#endif /* !__TAPISROULANTDEF__ */
