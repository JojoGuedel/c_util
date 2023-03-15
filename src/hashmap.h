#ifndef H_HASHMAP
#define H_HASHMAP

#include "list.h"

typedef struct {
    size_t size;

    List data;
} Hashmap;

#endif