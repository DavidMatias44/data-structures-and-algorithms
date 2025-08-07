#ifndef NODE_H
#define NODE_H
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
typedef struct node Node;

Node* createNode();

#endif // NODE_H
