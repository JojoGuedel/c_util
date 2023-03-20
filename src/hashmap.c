#include "hashmap.h"

#define HASHMAP_SPACE_RATIO 2

typedef struct {
    const char* key;
    void* value;
    void* next;
} Entry;

static int _hash(const char* key, size_t size) {
    int hash = 0;

    for (int i = 0; key[i]; i++) {
        hash += key[i];
    }

    return hash % size;
}

static void* _get_entry(void* key) {

}

Hashmap hashmap_create() {
    return (Hashmap) {0, list_create()};
}

void hashmap_destroy(Hashmap* hashmap) {
    list_destory(&hashmap->entries);
}

void hashmap_put(Hashmap* hashmap, const char* key, void* value) {
    hashmap->size++;
}

void hashmap_get(Hashmap* hashmap, const char* key) {

}

void hashmap_remove(Hashmap* hashmap, const char* key) {

}