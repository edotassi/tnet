#include <stdio.h>
#include <stdlib.h>

#include <glib.h>
#include <pcap/pcap.h>

#include "ttype.h"

int main(int argc, char *argv[])
{
    tobj *t;

    printf("Initialing tobj\n");
    t = tobj_new();

    g_string_printf(t->interface, "%s", argv[1]);

    printf("using %s\n", t->interface->str);

    printf("quit, bye!!\n");
    return 0;
}
