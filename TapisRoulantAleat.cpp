//
// TapisRoulantAleat.cpp for TapisRoulantAleat in /home/candan_c/cu/rendu/cpp/colle1_cpp
// 
// Made by caner candan
// Login   <candan_c@epitech.net>
// 
// Started on  Sun May 25 09:54:27 2008 caner candan
// Last update Sun May 25 10:26:58 2008 julian kirtz
//

#include <stdlib>
#include <time>
#include "TapisRoulantAleat.h"
#include "PapierCadeau.h"
#include "Carton.h"

TapisRoulantAleat::TapisRoulantAleat()
{
  int	aleat;
  srandom(time(NULL));
  if (aleat = random() % 2)
    {
}

TapisRoulantAleat::~TapisRoulantAleat()
{}
