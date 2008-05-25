/*
** TapisRoulantAleat.h for TapisRoulantAleat in /home/candan_c/cu/rendu/cpp/colle1_cpp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun May 25 09:52:19 2008 caner candan
** Last update Sun May 25 12:08:07 2008 caner candan
*/

#ifndef __TAPISROULANTALEAT_H__
# define __TAPISROULANTALEAT_H__

# include "TapisRoulantAleat.h"
# include "TapisRoulantDef.h"

class	TapisRoulantAleat : public TapisRoulantDef
{
 public:
  TapisRoulantAleat();
  TapisRoulantAleat(const TapisRoulantAleat& t);
  ~TapisRoulantAleat();
  TapisRoulantAleat&	operator=(const TapisRoulantAleat& t);
};

#endif /* !__TAPISROULANTALEAT_H__ */