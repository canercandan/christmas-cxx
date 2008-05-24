/*
** Objet.h for Objet in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 15:22:11 2008 caner candan
** Last update Sat May 24 21:38:34 2008 caner candan
*/

#ifndef __OBJET_H__
#define __OBJET_H__

# include <string>

class	Objet
{
 public:
  Objet();
  Objet(const std::string& name);
  virtual ~Objet();
  Objet(const Objet& o);
  Objet&	operator=(const Objet& o);

  virtual void	estPris() = 0;

  static Objet**	MesTestUnitaires();
  static Objet*		MesTestUnitaires(Objet **o);
  fconst std::string&	getName() const;
 protected:
  std::string	_name;
};

#endif /* !__OBJET_H__ */
