/*
** Emballage.h for Emballage in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 14:08:50 2008 caner candan
** Last update Sat May 24 15:29:53 2008 caner candan
*/

#ifndef __EMBALLAGE_H__
# define __EMBALLAGE_H__

class	Emballage
{
 public:
  Emballage();
  Emballage(bool isempty, bool isopen);
  Emballage(Emballage& e);
  virtual ~Emballage();
  Emballage&	operator=(Emballage& e);

  virtual void	estPris();
  void	emballerEmballage();
  void	ouvrirEmballage();
 protected:
  bool	_isempty;
  bool	_isopen;
};

#endif /* !__EMBALLAGE_H__ */
