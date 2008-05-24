#ifndef __JOUET_H__
#define __JOUET_H__

#include <iostream>
#include "Objet.h"

class	Jouet : public Objet
{
 public:
  Jouet();
  Jouet(const std::string& name);
  virtual ~Jouet();
  Jouet&	operator=(Jouet& j);

  virtual void	estPris() = 0;
 protected:
  std::string	_name;
  bool		_estpris;
};

#endif
