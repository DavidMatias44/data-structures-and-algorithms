#include <stdio.h>
#include "../include/array.h"
#include "../include/stack.h"
#include "../include/queue.h"

int main(void)
{
    Queue* q = createQueue();
    
    queueInsert(q, 10);
    printQueue(*q);
    queueInsert(q, 13);
    printQueue(*q);

    queueDelete(q);
    printQueue(*q);
    queueDelete(q);
    printQueue(*q);
    queueDelete(q);

    return 0;
}