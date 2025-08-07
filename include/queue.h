#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"
#include <stdbool.h>

struct queue
{
    Node* head;
    Node* tail;
    size_t size;
};
typedef struct queue Queue;

Queue* createQueue();
void queueInsert(Queue*, int);
int queueDelete(Queue*);
bool queueIsEmpty(Queue);
int queueHead(Queue);
int queueTail(Queue);
void printQueue(Queue);

#endif // QUEUE_H