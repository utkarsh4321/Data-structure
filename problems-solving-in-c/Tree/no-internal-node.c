#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

int countInternal(struct node *ptr)
{
    if (ptr == NULL)
        return 0;
    if (ptr->left == NULL && ptr->right == NULL)
        return 0;
    return 1 + countInternal(ptr->left) + countInternal(ptr->right);
}
struct node *newNode(int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

void main()
{
    struct node *ptr = newNode(22);
    ptr->left = newNode(34);
    ptr->right = newNode(45);
    ptr->left->left = newNode(23);
    ptr->left->right = newNode(90);
    printf("%d", countInternal(ptr));
}