#include "list.h"
#include <stdlib.h>
#include <assert.h>

List list_create() {
    return (List) { 1, 0, malloc(sizeof(void*)) };
}

void list_destory(List* list) {
    free(list->data);
}

void* list_get(List* list, size_t index) {
    assert(index<list->size);
    return list->data[index];
}

void list_set(List* list, size_t index, void* element) {
    assert(index<list->size);
    list->data[index] = element;
}

void list_push(List* list, void* element) {
    if (list->capacity <= list->size) {
        list_reserve(list, list->capacity * 2);
    }

    list->data[list->size++] = element;
}

void* list_pop(List* list) {
    return list->data[--list->size];
}

void list_insert(List* list, size_t index, void* element);
void list_remove(List* list, size_t index);

void list_reserve(List* list, size_t capacity) {
    if (capacity > list->capacity) {
        list->data = realloc(list->data, sizeof(void*) * capacity);
        list->capacity = capacity;
    }
}