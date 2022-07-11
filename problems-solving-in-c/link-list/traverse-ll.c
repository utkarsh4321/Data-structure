#include <stdio.h>
#include <conio.h>
#include "defaut-ll.c"

// struct node
// {
//     int data;
//     struct node *link;
// };

void main()
{
    struct node node1 = {10, NULL};
    struct node node2 = {34, NULL};
    struct node node3 = {65, NULL};
    struct node *start;
    node1.link = &node2;
    node2.link = &node3;
    start = &node1;
    while (start != NULL)
    {
        printf("%d\n", start->data);
        start = start->link;
    }
}