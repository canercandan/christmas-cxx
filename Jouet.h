#ifndef __JOUET_H__
#define __JOUET_H__

class	Jouet : public Objet
{
 public:
  Jouet();
  ~Jouet();
  Jouet(const Jouet& j);
  Jouet&	operator=(const Jouet& j);
 protected:
  std::string	_name;
};

#endif
