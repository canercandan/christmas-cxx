//
// TapisRoulantAleat.cpp for TapisRoulantAleat in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 09:54:27 2008 caner candan
// Last update Sun May 25 14:46:17 2008 julian kirtz
//

#include <cstdlib>
#include <ctime>
#include <sstream>
#include "TapisRoulantAleat.h"
#include "Nounours.h"
#include "PetitPoney.h"
#include "PapierCadeau.h"
#include "Carton.h"
#include "Objet.h"

using namespace std;

TapisRoulantAleat::TapisRoulantAleat()
{
  int	aleat;
  srandom(time(NULL));
  switch (aleat = random() % 4)
    {
    case 0:
      setObjet(new Nounours("Bisousnours"));
      break;
    case 1:
      setObjet(new PetitPoney("PetitPoney"));
      break;
    case 2:
      setObjet(new PapierCadeau);
      break;
    case 4:
      setObjet(new Carton);
      break;
    }
}

TapisRoulantAleat::TapisRoulantAleat(const TapisRoulantAleat& t)
  : TapisRoulantDef(t._objet)
{}

TapisRoulantAleat::~TapisRoulantAleat()
{}

TapisRoulantAleat&	TapisRoulantAleat::operator=(const TapisRoulantAleat& t)
{
  if (this != &t)
    this->_objet = t._objet;
  return (*this);
}

std::string	TapisRoulantAleat::cadeauXML(Objet *o)
{
  ostringstream	flux;

  flux << '<' << o->getName() << '>' << endl
       << '<' << o->getObjet()->getName() << '>' << endl
       << "<Jouet name=\"" << o->getObjet()->getObjet()->getName() << "\"/>" << endl
       << "</" << o->getObjet()->getName() << ">" << endl
       << "</" << o->getName() << ">" << endl;
  return (flux.str());
}
