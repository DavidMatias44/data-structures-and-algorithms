#include <stdio.h>
#include "../include/array.h"
#include "../include/stack.h"

int main(void)
{
    Stack* s = createStack();
    printStack(*s);

    stackPush(s, 69);
    printStack(*s);
    printf("top: %d\n", stackTop(*s));
    stackPush(s, 420);
    printStack(*s);
    printf("top: %d\n", stackTop(*s));
    stackPop(s);
    printStack(*s);
    printf("top: %d\n", stackTop(*s));
    stackPop(s);
    printStack(*s);
    // printf("top: %d\n", stackTop(*s));
    stackPop(s);

    return 0;
}