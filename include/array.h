#ifndef ARRAY_H
#define ARRAY_H
#include <stdio.h>

struct array 
{
    size_t size;
    size_t capacity;
    int* data;
};

typedef struct array Array;

Array* createArray(size_t);
void printArray(Array);
void push(Array*, int);     // Insert the new element at the end of the array.
int pop(Array*);            // Delete the element at the end of the array and return it.
void insert(Array*, int);   // Insert the new element at the beginning of the array.
int delete(Array*);         // Delete the element at the beginning of the array and return it.
void destroyArray(Array*);

#endif // ARRAY_H