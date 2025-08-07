#include "../include/stack.h"
#include "../include/node.h"
#include <stdlib.h>
#include <stdbool.h>

Stack* createStack()
{
    Stack* s = malloc(sizeof(Stack));
    s->top = NULL;
    s->size = 0;
    return s;
}

void stackPush(Stack* s, int e)
{
    Node* n = createNode(); 
    n->data = e;

    if (stackIsEmpty(*s)) {
        n->next = NULL;
    } else {
        n->next = s->top;
    }

    s->top = n;
    s->size++;
}

int stackPop(Stack* s)
{
    if (stackIsEmpty(*s)) {
        printf("Stack is empty.\n");
        return 0;
    }

    int e = s->top->data;
    Node* temp = s->top;
    s->top = s->top->next;
    free(temp);
    s->size--;

    return e;
}

int stackTop(Stack s)
{
    if (stackIsEmpty(s)) {
        printf("Stack is empty.\n");
    }
    return s.top->data;
}

bool stackIsEmpty(Stack s)
{
    return s.top == NULL;
}

void printStack(Stack s)
{
    printf("*top -> ");
    while (s.top != NULL) {
        printf("%d -> ", s.top->data);
        s.top = s.top->next;
    }
    printf("NULL\n");
}

void destroyStack(Stack** s) 
{
    while ((*s)->top != NULL) {
        Node* aux = (*s)->top;
        (*s)->top = (*s)->top->next;
        free(aux);
    }
    free(*s);
    *s = NULL;
}
