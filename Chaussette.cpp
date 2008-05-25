#include "Chaussette.h"

using namespace std;

const short Chaussette::MAX_LENGHT = 1024;

Chaussette::Chaussette(const char* mystic, unsigned short port)
{
  try
    {
      cout << "Hue de pet multi-casque chaussette:" << endl
	   << Mystique: << mystic << endl
	   << Porte: << port << endl;
      int	success;
      int	mc_ttl = 1;
      _bound = false;
      _socket = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP);
      success = setsockopt(_socket, IPPROTO_IP, IP_MULTICAST_TTL, (opt_type)&mc_ttl, sizeof(mc_ttl));
      if ((setsockopt(_socket, SOL_SOCKET, SO_REUSEADDR, (opt_type)&mc_ttl, sizeof(mc_ttl))) < 0)
	throw true;
      memset(&_multicastAddress, 0, sizeof(_multicastAddress));
      _multicastAddress.sin_family = AF_INET;
      _multicastAddress.sin_addr.s_addr = inet_addr(group);
      _multicastAddress.sin_port = htons(port);
      _request.imr_multiaddr.s_addr = inet_addr(group);
      _request.imr_interface.s_addr = INADDR_ANY;
      if (success < 0 || _socket < 0)
	throw true;
    }
  catch (bool)
    {
      cout << "Chaussette::Chaussette: error while init socket." << endl;
    }
}

Chaussette::~Chaussette()
{
  if (_bound)
    setsockopt(_socket, IPPROTO_IP, IP_DROP_MEMBERSHIP, (opt_type)&_request, sizeof(_request));
  close(_socket);
}

void	Chaussette::udpSend(string& msg)
{
  try
    {
      int length = sendto(_socket, msg.c_str(), strlen(msg.c_str()), 0, (struct sockaddr*)&_multicastAddress, sizeof(_multicastAddress));
      if (length < msg.size())
	throw true;
    }
  catch (bool)
    {
      cout << "Chaussette::udpSend: Error while sending udp msg." << endl;
    }
}

string	Chaussette::udpReceive()
{
  char		buffer[MAX_LENGHT + 1];
  int		length;
  string	msg;
  unsigned int	from_len;
  if (!_bound)
    {
      bind(_socket, (struct sockaddr *)&_multicastAddress, sizeof(_multicastAddress));
      setsockopt(_socket, IPPROTO_IP, IP_ADD_MEMBERSHIP, (opt_type)&_request, sizeof(_request));
      _boud = true;
    }
  memset(buffer, 0, sizeof(buffer));
  from_len = sizeof(_remoteAddress);
  memset(&_remoteAddress, 0, from_len);
  length = recvfrom(_socket, buffer, MAX_LENGTH, 0, (struct sockaddr*) &_remoteAddress, (socklen_t *) &from_len);
  message = string(buffer);
  return string(message.c_str());
}
