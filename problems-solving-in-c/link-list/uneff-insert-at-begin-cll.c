#include <stdio.h>
#include "defaut-ll.c"

void main()
{
    struct node *start;
    struct node *ptr;
    struct node *temp;
    struct node *obj;
    struct node *head;
    struct node *ptr1;
    int key = 100;
    temp = (struct node *)malloc(sizeof(struct node));
    obj = createSLL("cll");
    if (temp == NULL || obj == NULL)
        return;
    start = obj->link;
    head = start;
    temp->data = key;
    for (ptr = start->link; ptr->link != start; ptr = ptr->link)
        ;
    ptr->link = temp;
    temp->link = head;

    head = temp;
    printf("%d", head->data);
    for (ptr1 = head->link; ptr1 != head; ptr1 = ptr1->link)
    {
        printf("%d", ptr1->data);
    }
}