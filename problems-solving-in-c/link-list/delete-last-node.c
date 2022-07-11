#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void main()
{
    struct node name = {19, NULL};
    struct node ranga = {20, NULL};
    struct node nanga = {50, NULL};
    struct node *start;
    struct node *ptr;
    struct node *prev = NULL;
    name.link = &ranga;
    ranga.link = &nanga;
    start = &name;
    ptr = &name;
    // printf("%d", ptr->link->data);

    while (ptr->link != NULL)
    {
        prev = ptr;
        ptr = ptr->link;
    }
    // printf("%d", ptr->data);
    prev->link = NULL;
    free(ptr);
    ptr = NULL;
    // printf("%d", start->data);
    while (start != NULL)
    {
        printf("%d", start->data);
        start = start->link;
    }
    // ram1.link = &ram2;
    // ram2.link = &ram3;
    // start = &ram1;
    // ptr = start;
    // if (ptr == NULL)
    //     return;
    // if (ptr->link == NULL)
    // {
    //     free(ptr);
    //     ptr = NULL;
    //     start = NULL;
    //     return;
    // }
}