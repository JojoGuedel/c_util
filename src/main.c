#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    size_t capacity;
    size_t size;
    
    void** data;
} List;

typedef struct {
    const char* key;
    void* value;
    void* next;
} Entry;

typedef struct {
    size_t size;

} Hashmap;

int hashmap_hash(const char* key, size_t size) {
    int hash = 0;

    for (int i = 0; key[i]; i++) {
        hash += key[i];
    }

    return hash % size;
}

int main() {
    printf("Hello world!\n");
}
