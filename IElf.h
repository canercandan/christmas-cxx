/*
** IElf.h for IElf in /home/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun May 25 08:23:49 2008 caner candan
** Last update Sun May 25 14:50:02 2008 caner candan
*/

#ifndef __IELF_H__
# define __IELF_H__

# include "Objet.h"

class	IElf
{
 public:
  virtual ~IElf() {}

  virtual Objet	*emballerCadeau(void) = 0;
};

#endif /* !__IELF_H__ */
