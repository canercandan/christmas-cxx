/*
** ElfDePePeNoel.h for ElfDePePeNoel in /home/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun May 25 08:32:54 2008 caner candan
** Last update Sun May 25 14:49:45 2008 caner candan
*/

#ifndef __ELFDEPEPENOEL_H__
# define __ELFDEPEPENOEL_H__

# include <string>
# include "IElf.h"
# include "TableAleat.h"
# include "TapisRoulantAleat.h"
# include "Objet.h"

using namespace std;

class	ElfDePePeNoel : public IElf
{
 public:
  ElfDePePeNoel();
  ElfDePePeNoel(TableAleat *table, TapisRoulantAleat *tapis);
  ElfDePePeNoel(ElfDePePeNoel& e);
  ~ElfDePePeNoel();
  ElfDePePeNoel&	operator=(ElfDePePeNoel& e);

  virtual Objet	*emballerCadeau(void);
 private:
  TableAleat		*_table;
  TapisRoulantAleat	*_tapis;

  Objet	*_getObject(const string& name) const;
};

#endif /* !__ELFDEPEPENOEL_H__ */
