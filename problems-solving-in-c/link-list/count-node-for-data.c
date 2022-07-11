#include <stdio.h>
#include "defaut-ll.c"

void main()
{
    struct node *start;
    struct node *obj;
    int count = -1;
    int key = 45;
    obj = createSLL("");
    if (obj == NULL || obj->link == NULL)
        return;
    start = obj->link;

    while (start != NULL)
    {
        count++;
        if (start->data == key)
        {
            break;
        }

        start = start->link;
    }
    if (count != -1 && start != NULL)
    {
        printf("%d", count);
    }
    else
    {
        printf("%d", -1);
    }
}