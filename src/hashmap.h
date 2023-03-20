#ifndef H_HASHMAP
#define H_HASHMAP

#include "list.h"

typedef struct {
    size_t size;

    List entries;
} Hashmap;

Hashmap hashmap_create();
void hashmap_destroy(Hashmap* hashmap);

void hashmap_put(Hashmap* hashmap, const char* key, void* value);
void hashmap_get(Hashmap* hashmap, const char* key);
void hashmap_remove(Hashmap* hashmap, const char* key);

#endif