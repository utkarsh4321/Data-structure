#include <stdio.h>
#include "defaut-ll.c"

void main()
{
    struct node *obj;
    struct node *start;
    struct node *ptr;
    int key = 100;
    int k;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    obj = createSLL("cll");

    if (temp == NULL || obj == NULL)
        return;
    temp->data = key;
    temp->link = NULL;
    start = obj->link;
    temp->link = start->link;
    start->link = temp;
    k = temp->data;
    temp->data = start->data;
    start->data = k;
    printf("%d", start->data);
    for (ptr = start->link; ptr != start; ptr = ptr->link)
    {
        printf("%d", ptr->data);
    }
}