#ifndef __OBJET_H__
#define __OBJET_H__

class	Objet
{
 public:
  Objet();
  ~Objet();
  Objet(const Objet& o);
  Objet&	operator=(const Objet& o);
  Objet**	MesTestUnitaires();
};

#endif
