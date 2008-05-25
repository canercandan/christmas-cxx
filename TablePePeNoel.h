#ifndef __TABLEPEPENOEL_H__
#define __TABLEPEPENOEL_H__

#include "TableDef.h"
#include "ITable.h"

class	TablePePeNoel : public TableDef
{
 public:
  TablePePeNoel();
  TablePePeNoel(const TablePePeNoel& t);
  ~TablePePeNoel();
  TablePePeNoel&	operator=(const TablePePeNoel& t);

  static ITable		*creerTable(void);
};

#endif /* !__TABLEPEPENOEL_H__ */
