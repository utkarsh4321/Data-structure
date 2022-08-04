#include <iostream>
#include <stdlib.h>

using namespace std;

int preOrder[] = {1, 5, 2, 3, 4};
int inOrder[] = {5, 1, 2, 3, 4};
int key = 0;

struct node
{
    struct node *left;
    int data;
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
int findNodeInOrder(int start, int end, int key)
{
    int i;
    for (i = start; i < end + 1; i++)
    {
        if (inOrder[i] == key)
        {
            break;
        }
    }
    return i;
}

struct node *pre_in_tree(int start, int end, int n, struct node *root)
{
    if (n > 0)
    {
        int findIndex = findNodeInOrder(start, end, preOrder[key]);
        root = createBtNode(inOrder[findIndex]);
        key++;
        root->left = pre_in_tree(start, findIndex - 1, ((findIndex - 1) - start) + 1, root->left);
        root->right = pre_in_tree(findIndex + 1, end, (end - (findIndex + 1)) + 1, root->right);
    }
    return root;
}
void printPre(struct node *ptr)
{
    if (ptr == NULL)
        return;
    cout << ptr->data;
    printPre(ptr->left);
    printPre(ptr->right);
}
int main()
{
    int npre = sizeof(preOrder) / sizeof(preOrder[0]);
    int nIn = sizeof(inOrder) / sizeof(inOrder[0]);
    struct node *ptr = NULL;
    if (npre != nIn)
        return 0;
    ptr = pre_in_tree(0, nIn - 1, nIn, ptr);
    printPre(ptr);
    //         cout
    //     << ptr->data;
    // cout << ptr->left->data;
    // cout << ptr->left->left->data;
}
