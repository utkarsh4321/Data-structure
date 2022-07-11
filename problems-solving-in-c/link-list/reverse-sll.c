#include <stdio.h>
#include "defaut-ll.c"

void main()
{
    struct node *prev;
    struct node *ptr;
    struct node *next;
    struct node *start;
    struct node *obj;

    prev = NULL;
    ptr = NULL;
    next = NULL;

    obj = createSLL("");
    if (obj == NULL || obj->link == NULL)
        return;

    next = obj->link;
    start = next;
    if (next->link == NULL)
    {
        while (next != NULL)
        {
            printf("%d", next->data);
            next = next->link;
        }
    }
    else
    {

        while (next != NULL)
        {
            ptr = next;
            next = next->link;
            ptr->link = prev;
            prev = ptr;
        }
        start = ptr;
        while (start != NULL)
        {
            printf("%d", start->data);
            start = start->link;
        }
    }
}