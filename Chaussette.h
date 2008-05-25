#ifndef __CHAUSSETTE_H__
#define __CHAUSSETTE_H__

#include <iostream>
#include <sys/types.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

typedef void* opt_type;

class	Chaussette
{
 public:
  static const short MAX_LENGTH;
  Chaussette(const char* mystic, unsigned short port);
  ~Chaussette();
  void		udpSend(std::string& msg);
  std::string	udpReceive(void);
 private:
  struct sockaddr_in	_remoteAddress;
  struct sockaddr_in	_multicastAddress;
  struct ip_mreq	_request;
  int			_socket;
  bool			_bound;
};

#endif
