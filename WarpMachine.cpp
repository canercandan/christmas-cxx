//
// WarpMachine.cpp for  in /u/epitech_2010s/kirtz_j/cu/rendu/cpp/colle
// 
// Made by julian kirtz
// Login   <kirtz_j@epitech.net>
// 
// Started on  Sun May 25 15:32:25 2008 julian kirtz
// Last update Sun May 25 15:43:00 2008 julian kirtz
//

#include <iostream>
#include "Chaussette.h"

using namespace std;

int	main(int ac, char **av)
{
  if (ac == 3)
    {
      Chaussette socket(av[1], atoi(av[2]));
      while (42)
	{
	  cout << "Nouveau cadeau:" << endl
	       << socket.udpReceive() << endl;
	}
    }
  else
    {
      cout << "Usage: WarpMachine mystique porte" << endl;
    }
  return (0);
}
