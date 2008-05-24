#ifndef __PETITPONEY_H__
#define __PETITPONEY_H__

#include "Jouet.h"

class	PetitPoney : public Jouet
{
 public:
  PetitPoney(const std::string& name);
  ~PetitPoney();
  PetitPoney(const PetitPoney& p);
  PetitPoney&	operator=(const PetitPoney& p);

  virtual void	estPris();
};

#endif /* !__PETITPONEY_H__ */
