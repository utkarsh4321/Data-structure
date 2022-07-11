#include <stdio.h>
#include "defaut-ll.c"

void main()
{
    struct node *start;
    struct node *slow;
    struct node *fast;
    start = createSLL("");
    if (start == NULL || start->link == NULL)
        return;

    slow = start->link;
    fast = slow;
    while (fast != NULL && fast->link != NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
    }
    printf("%d", slow->data);
}