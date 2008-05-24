#ifndef __JOUET_H__
#define __JOUET_H__

#include <iostream>
#include "Objet.h"

class	Jouet : public Objet
{
 public:
  Jouet();
  ~Jouet();
  Jouet(const Jouet& j);
  Jouet&		operator=(const Jouet& j);

  virtual void	estPris() = 0;
 protected:
  const std::string&	_name;
};

#endif
