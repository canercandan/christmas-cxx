#include <iostream>
#include "TablePePeNoel.h"

using namespace std;

TablePePeNoel::TablePePeNoel()
{
  for (int i = 0; i < 11; i++)
    _tab[i] = NULL;
  _nbObj = 0;
}

TablePePeNoel::~TablePePeNoel()
{
}

TablePePeNoel::TablePePeNoel(const TablePePeNoel& t)
  : ITable(), _nbObj(t._nbObj)
{
  for (int i = 0; i < 11; i++)
    _tab[i] = t._tab[i];
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

void	TablePePeNoel::Poser(Objet *o)
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
  Objet*	tmp[11];
  Objet*	obj;
  int		i = 0;
  try
    {
      while (i < this->_nbObj && this->_tab[i]->getName() != name)
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
      for (i = 0; i < this->_nbObj; i++)
	this->_tab[i] = tmp[i];
      return (obj);
    }
  catch (bool)
    {
      cout << "TablePePeNoel::Prendre impossible: 'Objet' named name not found" << endl;
      return (NULL);
    }
}

Objet*	TablePePeNoel::Prendre(const int pos)
{
  Objet*	tmp[11];
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
      tmp[i - 1] = NULL;
      this->_nbObj--;
      for (i = 0; i < this->_nbObj; i++)
	this->_tab[i] = tmp[i];
      return (obj);
    }
  catch (bool)
    {
      cout << "TablePePeNoel::Prendre impossible: 'Objet' named name not found" << endl;
      return (NULL);
    }
}

std::string*	TablePePeNoel::Regarder() const
{
  std::string*	tab = new std::string[this->_nbObj];
  int		i = 0;
  while (this->_tab[i])
    {
      tab[i] = this->_tab[i]->getName();
      i++;
    }
  return (tab);
}
