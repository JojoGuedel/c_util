#include "hashmap.h"

typedef struct {
    const char* key;
    void* value;
    void* next;
} Entry;