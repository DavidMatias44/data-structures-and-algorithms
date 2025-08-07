#include <stdio.h>
#include <stdlib.h>
#include "../include/queue.h"

Queue* createQueue()
{
    Queue* q = malloc(sizeof(Queue));
    q->head = NULL;
    q->tail = NULL;
    return q;
}

void queueInsert(Queue* q, int e)
{
    Node* n = createNode();
    n->data = e;
    n->next = NULL;

    if (queueIsEmpty(*q)) {
        q->head = q->tail = n;
        q->size++;
        return;
    }

    q->tail->next = n;
    q->tail = n;
    q->size++;
}

int queueDelete(Queue* q)
{
    if (queueIsEmpty(*q)) {
        printf("Queue is empty.\n");
        return 0;
    }

    int e = q->head->data;
    if (q->head == q->tail) {
        q->tail  = NULL;
    }

    Node* temp = q->head;
    q->head = q->head->next;
    free(temp);
    q->size--;

    return e;
}

bool queueIsEmpty(Queue q)
{
    return q.head == NULL;
}

int queueHead(Queue q)
{
    return q.head->data;
}

int queueTail(Queue q)
{
    return q.tail->data;
}

void printQueue(Queue q)
{
    printf("*head -> ");
    if (queueIsEmpty(q)) {
        printf("NULL");
    } else {
        while (q.head != NULL) {
            printf("%d -> ", q.head->data);
            q.head = q.head->next;
        }
    }
    printf("NULL\n");
}

void destroyQueue(Queue** q)
{
    while ((*q)->head != NULL) {
        Node* aux = (*q)->head;
        (*q)->head = (*q)->head->next;
    }
    free(*q);
    *q = NULL;
}
