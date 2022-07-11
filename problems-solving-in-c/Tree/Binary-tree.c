#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createBtNode(int key)
{

    struct node *rr = (struct node *)malloc(sizeof(struct node));
    rr->data = key;
    rr->left = NULL;
    rr->right = NULL;
    return rr;
}
void preOrder(struct node *tt)
{
    if (tt == NULL)
        return;
    printf("%d", tt->data);
    preOrder(tt->left);
    preOrder(tt->right);
}

void main()
{
    struct node *rr;

    rr = createBtNode(1);
    rr->left = createBtNode(3);
    rr->left->left = createBtNode(10);
    rr->right = createBtNode(23);
    preOrder(rr);
}
