#ifndef __JOUET_H__
#define __JOUET_H__

#include <iostream>
#include "Objet.h"

class	Jouet : public Objet
{
 public:
  virtual ~Jouet();

  virtual void	estPris() = 0;
 protected:
  const std::string&	_name;
  bool			_estpris;
};

#endif
