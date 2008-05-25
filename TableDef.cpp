//
// TableDef.cpp for TableDef in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 10:35:06 2008 caner candan
// Last update Sun May 25 14:58:39 2008 caner candan
//

#include <iostream>
#include "TableDef.h"
#include "ITable.h"

using namespace std;

TableDef::TableDef()
  : _nbObj(0)
{
  int	i;

  for (i = 0; i < 11; i++)
    _tab[i] = NULL;
}

TableDef::TableDef(Objet* const* tab, int nbObj)
  : _nbObj(nbObj)
{
  int	i;

  for (i = 0; i < 11; i++)
    _tab[i] = tab[i];
}

TableDef::TableDef(const TableDef& t)
  : ITable(), _nbObj(t._nbObj)
{
  int	i;

  for (i = 0; i < 11; i++)
    _tab[i] = t._tab[i];
}

TableDef::~TableDef()
{}

TableDef&	TableDef::operator=(const TableDef& t)
{
  int		i;

  if (this != &t)
    {
      for (i = 0; i < 11; i++)
	this->_tab[i] = t._tab[i];
      this->_nbObj = t._nbObj;
    }
  return (*this);
}

void	TableDef::Poser(Objet *o)
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
      cout << "Table::Poser impossible: too much 'Objet'" << endl;
    }
}

Objet*		TableDef::Prendre(const string& name)
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
	{
	  tmp[i - 1] = this->_tab[i];
	  i++;
	}
      this->_nbObj--;
      for (i = 0; i < this->_nbObj; i++)
	this->_tab[i] = tmp[i];
      this->_tab[i] = NULL;
      return (obj);
    }
  catch (bool)
    {
      cout << "Table::Prendre impossible: 'Objet' "
	   << "named name not found" << endl;
      return (NULL);
    }
}

Objet*		TableDef::Prendre(const int pos)
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
	{
	  tmp[i - 1] = this->_tab[i];
	  i++;
	}
      tmp[i - 1] = NULL;
      this->_nbObj--;
      for (i = 0; i < this->_nbObj; i++)
	this->_tab[i] = tmp[i];
      this->_tab[i] = NULL;
      return (obj);
    }
  catch (bool)
    {
      cout << "Table::Prendre impossible: 'Objet' named "
	   << "name not found" << endl;
      return (NULL);
    }
}

std::string**	TableDef::Regarder() const
{
  std::string**	tab = new std::string*[this->_nbObj + 1];
  int		i = 0;
  while (this->_tab[i])
    {
      tab[i] = const_cast<std::string*>(&(this->_tab[i]->getName()));
      i++;
    }
  tab[i] = NULL;
  return (tab);
}

bool	TableDef::isEmpty() const
{
  if (this->_nbObj)
    return (false);
  return (true);
}

int	TableDef::getNbObj(void) const
{
  return (this->_nbObj);
}
