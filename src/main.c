#include <stdio.h>
#include "../include/array.h"
#include "../include/stack.h"
#include "../include/queue.h"

int main(void)
{
    Stack* s = createStack();
    stackPush(s, 12);
    stackPush(s, 13);
    stackPush(s, 14);
    printStack(*s);
    destroyStack(&s);

    Queue* q = createQueue();
    queueInsert(q, 23);
    queueInsert(q, 23);
    queueInsert(q, 23);
    printQueue(*q);
    destroyQueue(&q);

    return 0;
}