#include <iostream>
#include "TablePePeNoel.h"

using namespace std;

TablePePeNoel::TablePePeNoel()
{
  for (int i = 0; i < 11; i++)
    _tab = NULL;
  _nbObj = 0;
}

TablePePeNoel::~TablePePeNoel()
{
}

TablePePeNoel::TablePePeNoel(const TablePePeNoel& t)
{
}

TablePePeNoel&	TablePePeNoel::operator=(const TablePePeNoel& t)
{
  if (this != &t)
    {
      for (int i = 0; i < 11; i++)
	this->_tab[i] = t._tab[i];
    }
  return (*this);
}

void	TablePePeNoel::Poser(const Objet *o)
{
  try
    {
      if (this->_nbObj == 10)
	throw true;
      this->_tab[this->_nbObj] = o;
      this->_nbObj++;
    }
  catch (bool)
    {
      cout << "TablePePeNoel::Poser impossible: too much 'Objet'" << endl;
    }
}

Objet*	TablePePeNoel::Prendre(const string& name)
{
  Objet*	tmp[this->_nbObj - 1];
  Objet*	obj;
  int		i = 0;
  try
    {
      while (i < this->_nbObj && this->_tab[i]._name != name)
	{
	  tmp[i] = this->_tab[i];
	  i++;
	}
      if (i == this->_nbObj)
	throw true;
      obj = this->_tab[i++];
      while (i < this->_nbObj)
	tmp[i - 1] = this->_tab[i];
      tmp[i - 1] = 0;
      this->_nbObj--;
      this->_tab = tmp;
      return (obj);
    }
  catch (bool)
    {
      cout << "TablePePeNoel::Prendre impossible: 'Objet' named name not found" << endl;
    }
}

Objet*	TablePePeNoel::Prendre(const int pos)
{
  Objet*	tmp[this->_nbObj - 1];
  Objet*	obj;
  int		i = 0;
  try
    {
      while (i < this->_nbObj && i != pos)
	{
	  tmp[i] = this->_tab[i];
	  i++;
	}
      if (i == this->_nbObj)
	throw true;
      obj = this->_tab[i++];
      while (i < this->_nbObj)
	tmp[i - 1] = this->_tab[i];
      tmp[i - 1] = 0;
      this->_nbObj--;
      this->_tab = tmp;
      return (obj);
    }
  catch (bool)
    {
      cout << "TablePePeNoel::Prendre impossible: 'Objet' named name not found" << endl;
    }
}

std::string*	Regarder() const
{
  std::string*	tab = new std::string[this->_nbObj];
  int		i = 0;
  while (this->_tab[i])
    {
      tab[i] = this->_tab[i].name;
      i++;
    }
  return (tab);
}
