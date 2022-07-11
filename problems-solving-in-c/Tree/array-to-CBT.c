#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct gen
{
    int len;
    struct node *temp;
};

struct node *createBtNode(int key)
{

    struct node *rr = (struct node *)malloc(sizeof(struct node));
    rr->data = key;
    rr->left = NULL;
    rr->right = NULL;
    return rr;
}

struct node *levelTraversal(int arr[], int i, int n, struct node *root)
{

    if (i < n)
    {
        root = createBtNode(arr[i]);

        root->left = levelTraversal(arr, 2 * i + 1, n, root->left);
        root->right = levelTraversal(arr, 2 * i + 2, n, root->right);
    }
    return root;
}
void preOrder(struct node *tt)
{
    if (tt == NULL)
        return;
    printf("%d", tt->data);
    preOrder(tt->left);
    preOrder(tt->right);
}
struct gen createCBT()
{
    int *arr;
    int n;
    struct node *ptr = NULL;
    struct gen ptr1;
    printf("Enter no of node in tree:");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter node %d value:", i + 1);
        scanf("%d", &arr[i]);
    }
    ptr = levelTraversal(arr, 0, n, ptr);
    ptr1.len = n;
    ptr1.temp = ptr;
    return ptr1;
    // return ptr;
}