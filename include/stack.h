#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node* next;
};
typedef struct node Node;

struct stack
{
    Node* top;
    size_t size;
};
typedef struct stack Stack;

Stack* createStack();
void stackPush(Stack*, int);
int stackPop(Stack*);
int stackTop(Stack);
bool stackIsEmpty(Stack);
void printStack(Stack);

#endif // STACK_H
