#include <stdio.h>
#include "defaut-ll.c"

void main()
{
    int n;
    struct node *ptr;
    struct node *start;
    printf("Enter no of nodes");
    scanf("%d", &n);
    start = createSLL(n);
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
}