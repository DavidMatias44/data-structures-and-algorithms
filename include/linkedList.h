#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct list
{
    Node* head;
    Node* tail;
    size_t size;
};
typedef struct list List;

List* createList();
void listInsert(List*, int);
void listPush(List*, int);
int listDelete(List*);
int listPop(List*);
int listGetAt(List, int);
void listInsertAt(List*, int, int);
bool listIsEmpty(List);
void printList(List);
void destroyList(List**);

#endif // LINKEDLIST_H