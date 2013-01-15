#ifndef TTYPE_H_INCLUDED
#define TTYPE_H_INCLUDED

#include <glib.h>
#include <pcap/pcap.h>

#include "errors.h"

typedef struct _tobj tobj;

struct _tobj {
    GString *interface;
    pcap_t *handle;
};


tobj* tobj_new();

#endif // TTYPE_H_INCLUDED
