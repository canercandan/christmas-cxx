#ifndef __NOUNOURS_H__
#define __NOUNOURS_H__

class	Nounours : public Jouet
{
 public:
  Nounours(const std::string& name);
  ~Nounours();
  Nounours(const Nounours& n);
  Nounours&	operator=(const Nounours& n);
  void		estPris();
};

#endif
