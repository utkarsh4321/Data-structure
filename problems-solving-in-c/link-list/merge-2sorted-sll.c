#include <stdio.h>
#include "defaut-ll.c"

struct node *merger(struct node *a, struct node *b)
{
    struct node *prev;
    struct node *ptr = NULL;
    struct node *start;
    // struct node *head;

    if (a == NULL)
        return b;
    if (b == NULL)
        return b;

    while (a != NULL && b != NULL)
    {
        // printf("%d", a->data);
        if (a->data <= b->data)
        {
            prev = a;
            a = a->link;
            prev->link = NULL;
        }
        else
        {
            prev = b;
            b = b->link;
            prev->link = NULL;
        }
        if (ptr == NULL)
        {
            ptr = prev;
            start = prev;
        }
        else
        {
            ptr->link = prev;
            ptr = prev;
        }
    }

    if (a == NULL)
    {
        ptr->link = b;
    }
    else
    {
        ptr->link = a;
    }

    return start;
}

void main()
{
    struct node *obj;
    struct node *headA;
    struct node *headB;
    struct node *start;
    obj = createSLL("");
    headA = obj->link;
    obj = createSLL("");
    headB = obj->link;
    start = merger(headA, headB);
    printf("%d", start->data);
    if (start != NULL)
    {
        while (start != NULL)
        {
            printf("%d", start->data);
            start = start->link;
        }
    }
}