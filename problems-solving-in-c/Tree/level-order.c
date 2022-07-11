#include <stdio.h>
#include "./queue-array.c"
#include "./array-to-CBT.c"

void printTreeOrder(struct node *ptr, int *qu, int n)
{
    if (ptr == NULL)
        return;
    if (ptr->left != NULL)
    {
        enque(qu, n, ptr->left->data);
    }
    if (ptr->right != NULL)
    {
        enque(qu, n, ptr->right->data);
    }

    printTreeOrder(ptr->left, qu, n);
    printTreeOrder(ptr->right, qu, n);
}

void levelOrderTraversal()
{
    int *que;
    struct gen ptr;
    struct node *ptr2;
    int i = 0;
    ptr = createCBT();
    printf("%d cc %d", ptr.len, ptr.temp->data);
    que = (int *)calloc(ptr.len, sizeof(int));
    if (ptr.temp == NULL)
        return;
    enque(que, ptr.len, ptr.temp->data);
    printTreeOrder(ptr.temp, que, ptr.len);
    // printf("%d", que[0]);
    while (i < ptr.len)
    {
        printf("%d", que[i]);
        i++;
    }
};

void main()
{
    levelOrderTraversal();
}