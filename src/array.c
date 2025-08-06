#include "../include/array.h"
#include <stdlib.h>
#include <string.h>

Array* createArray(size_t capacity)
{
    Array* a = malloc(sizeof(Array));
    a->size = 0;
    a->capacity = capacity;
    a->data = (int*)malloc(capacity * sizeof(int));
    return a;
}

void printArray(Array a)
{
    printf("array: [");
    for (size_t i = 0; i < a.size; i++) {
        if (i == a.size - 1)
            printf("%d", a.data[i]);
        else
            printf("%d, ", a.data[i]);
    }
    printf("]\n");
}

void insert(Array* a, int e)
{
    if (a->size == 0) {
        push(a, e);
        return;
    }

    if (a->size == a->capacity) {
        a->capacity *= 2;
    }

    memmove(a->data + 1, a->data, sizeof(int) * a->size);
    a->size++;
    a->data[0] = e;
}

int delete(Array* a)
{
    if (a->size == 0)  {
        printf("[error]: array is empty.\n");
        return 0;
    }
    
    if (a->size == 1) {
        int e = pop(a);
        return e;
    }

    if (a->size < a->capacity / 2) {
        a->capacity /= 2;
    }

    int e = a->data[0];
    memmove(a->data, a->data + 1, sizeof(int) * a->size);
    a->size--;
    return e;
}

void push(Array* a, int e)
{
    if (a->size == a->capacity) {
        a->capacity *= 2;
    }

    a->data[a->size++] = e;
}

int pop(Array* a)
{
    if (a->size == 0) {
        printf("[error]: array is empty.\n");
        return 0;
    }

    return a->data[--a->size];
}

void destroyArray(Array* a)
{
    free(a->data);
    a->data = NULL;
    free(a);
    a = NULL;
}

