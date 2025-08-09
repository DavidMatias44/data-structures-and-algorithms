#include <stdio.h>
#include "../include/array.h"
#include "../include/stack.h"
#include "../include/queue.h"
#include "../include/linkedList.h"

int main(void)
{
    List* l = createList();

    listInsert(l, 21);
    printList(*l);
    listInsert(l, 23);
    printList(*l);
    listInsert(l, 25);
    printList(*l);

    printf("%d\n", listGetAt(*l, 0));
    printf("%d\n", listGetAt(*l, 1));
    printf("%d\n", listGetAt(*l, 2));

    listDelete(l);
    printList(*l);
    listDelete(l);
    printList(*l);
    listDelete(l);
    printList(*l);

    printf("%d\n", listGetAt(*l, 0));
    printf("%d\n", listGetAt(*l, 1));
    printf("%d\n", listGetAt(*l, 2));

    listPush(l, 33);
    printList(*l);
    listPop(l);
    printList(*l);
    listPush(l, 34);
    printList(*l);
    listPush(l, 35);
    printList(*l);
    listPush(l, 36);
    printList(*l);
    listPop(l);
    printList(*l);


    

    return 0;
}