#include "../include/linkedList.h"

List* createList()
{
    List* l = malloc(sizeof(List));
    l->head = NULL;
    l->tail = NULL;
    l->size = 0;
    return l;
}

void listInsert(List* l, int e)
{
    Node* n = createNode();
    n->data = e;
    n->next = l->head;

    if (listIsEmpty(*l)) {
        l->tail = n;
    }
    l->head = n;
    l->size++;
}

void listPush(List* l, int e)
{
    Node* n = createNode();
    n->data = e;
    n->next = NULL;

    if (listIsEmpty(*l)) {
        l->head = l->tail = n;
        l->size++;
        return;
    }

    l->tail->next = n;
    l->tail = n;
    l->size++;
}

int listDelete(List* l)
{
    if (listIsEmpty(*l)) {
        printf("List is empty.\n");
        return 0;
    }

    int e = l->head->data;
    Node* aux = l->head;
    l->head = l->head->next;
    free(aux);
    l->size--;
    return e;
}

int listPop(List* l)
{
    if (listIsEmpty(*l)) {
        printf("List is empty.\n");
        return 0;
    }

    Node* aux = l->head;
    int e = l->tail->data;

    if (l->tail == l->head) {
        l->head = l->tail = NULL;
        free(aux);
        l->size--;
        return e;
    }

    while (aux->next != l->tail) {
        aux = aux->next;
    }

    l->tail = aux;
    l->tail->next = NULL;
    aux = aux->next;
    free(aux);
    l->size--;
    return e;
}

int listGetAt(List l, int index)
{
    if (listIsEmpty(l)) {
        printf("List is emtpy.\n");
        return 0;
    }

    if (index < 0 || index > l.size - 1) {
        printf("Index out of bounds.\n");
        return 0;
    }

    int start = 0;
    while (start < index) {
        l.head = l.head->next;
        start++;
    }
    return l.head->data;
}

void listInsertAt(List*, int, int)
{
    // WIP.
}

bool listIsEmpty(List l) {
    return l.head == NULL;
}

void printList(List l)
{
    printf("[");
    while (l.head != NULL) {
        if (l.head->next == NULL) {
            printf("%d", l.head->data);
        } else {
            printf("%d, ", l.head->data);
        }
        l.head = l.head->next;
    }
    printf("]\n");
}

void destroyList(List** l)
{
    // WIP.
}
