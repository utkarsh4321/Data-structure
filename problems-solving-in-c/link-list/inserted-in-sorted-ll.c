#include <stdio.h>
#include "defaut-ll.c"

void main()
{
    struct node *start;
    int key = 25;
    int n;
    struct node *obj;
    struct node *ptr;
    struct node *temp;

    obj = createSLL("");
    n = obj->data;
    start = obj->link;
    ptr = start;
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
        return;
    temp->data = key;
    if (start == NULL)
    {
        temp->link = NULL;
        start = temp;
    }

    if (key < start->data)
    {
        temp->link = start;
        start = temp;
    }
    else
    {

        while (ptr->link != NULL && ptr->link->data < key)
        {
            ptr = ptr->link;
        }
        temp->link = ptr->link;
        ptr->link = temp;
    }
    while (start != NULL)
    {
        printf("%d", start->data);
        start = start->link;
    }
}