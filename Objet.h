/*
** Objet.h for Objet in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 15:22:11 2008 caner candan
** Last update Sat May 24 15:59:17 2008 caner candan
*/

#ifndef __OBJET_H__
#define __OBJET_H__

class	Objet
{
 public:
  Objet();
  virtual ~Objet();
  Objet(const Objet& o);
  Objet&	operator=(const Objet& o);

  virtual void	estPris() = 0;

  static Objet**	MesTestUnitaires();
  static Objet*		MesTestUnitaires(Objet **o);
};

#endif /* !__OBJET_H__ */
