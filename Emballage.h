/*
** Emballage.h for Emballage in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 14:08:50 2008 caner candan
** Last update Sat May 24 16:19:18 2008 caner candan
*/

#ifndef __EMBALLAGE_H__
# define __EMBALLAGE_H__

# include "Objet.h"

class	Emballage : public Objet
{
 public:
  Emballage();
  Emballage(bool isempty, bool isopen);
  Emballage(Emballage& e);
  virtual ~Emballage();
  Emballage&	operator=(Emballage& e);

  virtual void	estPris();
  void	emballerEmballage(Objet *o);
  void	ouvrirEmballage();
 protected:
  bool	_isempty;
  bool	_isopen;
 private:
  Objet	*_objet;
};

#endif /* !__EMBALLAGE_H__ */
