#ifndef H_LIST
#define H_LIST

#include <stddef.h>
typedef struct {
    size_t capacity;
    size_t size;

    void** data;
} List;

List list_create();
void list_destory(List* list);

void* list_get(List* list, size_t index);
void list_set(List* list, size_t index, void* element);
void list_push(List* list, void* element);
void* list_pop(List* list);
void list_insert(List* list, size_t index, void* element);
void list_remove(List* list, size_t index);
void list_reserve(List* list, size_t capacity);

#endif