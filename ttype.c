#include "ttype.h"

tobj* tobj_new()
{
    tobj *t = NULL;

    t = g_malloc0(sizeof(tobj));

    if (t == NULL) {
        fprintf(stderr, "Unable to allocate tobj!!\n");
        exit(TNET_ERR_UNABLE_ALLOC_TOBJ);
    }

printf("step 1\n");
    t->interface = g_string_new("");

    printf("step 2\n");
    return t;
}
