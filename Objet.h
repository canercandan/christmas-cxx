/*
** Objet.h for Objet in /u/epitech_2010s/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sat May 24 15:22:11 2008 caner candan
** Last update Sun May 25 12:48:07 2008 caner candan
*/

#ifndef __OBJET_H__
#define __OBJET_H__

# include <string>

class	Objet
{
 public:
  Objet();
  Objet(const std::string& name, Objet *objet);
  virtual ~Objet();
  Objet(const Objet& o);
  Objet&	operator=(const Objet& o);

  virtual void	estPris() = 0;

  static Objet**	MesTestUnitaires();
  static Objet*		MesTestUnitaires(Objet **o);
  const std::string&	getName() const;
  Objet			*getObjet() const;
 protected:
  std::string	_name;
  Objet		*_objet;
};

#endif /* !__OBJET_H__ */
