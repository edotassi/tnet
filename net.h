#ifndef NET_H_INCLUDED
#define NET_H_INCLUDED

#include <pcap/pcap.h>

#include "ttype.h"

pcap_t* net_open_interface();

void net_start(tobj*);

void net_packet_grabbed(u_char*, const struct pcap_pkthdr*, const u_char*);

#endif // NET_H_INCLUDED
