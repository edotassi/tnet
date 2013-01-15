#include "ttype.h"

tobj* tobj_new()
{
    tobj *t = NULL;
    t = malloc(sizeof(tobj));
    if (t == NULL) {
        fprintf(stderr, "Unable to allocate tobj!!\n");
        exit(TNET_ERR_UNABLE_ALLOC_TOBJ);
    }
    return t;
}
