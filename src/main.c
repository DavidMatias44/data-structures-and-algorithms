#include <stdio.h>
#include "../include/array.h"

int main(void)
{
    Array* a = createArray(4);

    insert(a, 12);
    printArray(*a);

    push(a, 23);
    printArray(*a);

    pop(a);
    printArray(*a);

    delete(a);
    printArray(*a);

    delete(a);
    pop(a);

    destroyArray(a);

    return 0;
}