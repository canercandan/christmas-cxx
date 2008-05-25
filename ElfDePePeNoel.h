/*
** ElfDePePeNoel.h for ElfDePePeNoel in /home/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun May 25 08:32:54 2008 caner candan
** Last update Sun May 25 13:37:53 2008 caner candan
*/

#ifndef __ELFDEPEPENOEL_H__
# define __ELFDEPEPENOEL_H__

# include <string>
# include "IElf.h"
# include "TablePePeNoel.h"
# include "TapisRoulantPePeNoel.h"
# include "Objet.h"

using namespace std;

class	ElfDePePeNoel : public IElf
{
 public:
  ElfDePePeNoel();
  ElfDePePeNoel(TablePePeNoel *table, TapisRoulantPePeNoel *tapis);
  ElfDePePeNoel(ElfDePePeNoel& e);
  ~ElfDePePeNoel();
  ElfDePePeNoel&	operator=(ElfDePePeNoel& e);

  virtual void	emballerCadeau(void);
 private:
  TablePePeNoel		*_table;
  TapisRoulantPePeNoel	*_tapis;

  Objet	*_getObject(const string& name) const;
};

#endif /* !__ELFDEPEPENOEL_H__ */
