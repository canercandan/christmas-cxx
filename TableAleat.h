#ifndef __TABLEALEAT_H__
#define __TABLEALEAT_H__

#include "TableDef.h"

class	TableAleat : public TableDef
{
  TableAleat();
  TableAleat(const TableAleat& t);
  ~TableAleat();
  TableAleat&	operator=(const TableAleat& t);
};

#endif
