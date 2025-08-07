#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdbool.h>
#include "node.h"

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
void destroyStack(Stack**);

#endif // STACK_H
