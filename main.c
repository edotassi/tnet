#include <stdio.h>
#include <stdlib.h>
#include <pcap/pcap.h>

#include "ttype.h"

tobj *t;

int main()
{
    printf("Initialing tobj\n");

    t = tobj_new();

    printf("quit, bye!!\n");
    return 0;
}
