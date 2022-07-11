#include <stdio.h>
#include "defaut-ll.c"

void main()
{
    int n;
    struct node *start;
    struct node *prev;
    struct node *ptr;
    struct node *obj;

    obj = createSLL("");
    start = obj->link;
    prev = start;
    ptr = start;
    printf("Enter nth node");
    scanf("%d", &n);
    if (obj->data < n)
        return;
    while (n >= 1)
    {
        ptr = ptr->link;
        n--;
    }
    while (ptr != NULL)
    {
        prev = prev->link;
        ptr = ptr->link;
    }
    printf("%d", prev->data);

    // printf("%d ll data %d", obj->data, obj->link->data);
}