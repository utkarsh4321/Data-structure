#include <stdio.h>
#include "defaut-ll.c"

void printRever(struct node *start)
{
    if (start == NULL)
        return;

    printRever(start->link);
    printf("%d", start->data);
}

void main()
{
    struct node *start;
    struct node *obj;
    obj = createSLL("");
    if (obj == NULL || obj->link == NULL)
        return;
    start = obj->link;
    printRever(start);
}