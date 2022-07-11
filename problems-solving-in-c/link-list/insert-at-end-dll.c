#include <stdio.h>
#include "defaut-ll.c"

void main()
{
    struct ndll *start;
    struct ndll2 *obj;
    struct ndll *ptr;
    struct ndll *temp;
    int key = 100;

    temp = (struct ndll *)malloc(sizeof(struct ndll));
    obj = createDLL();
    if (temp == NULL || obj == NULL)
        return;
    temp->data = key;
    temp->back = NULL;
    ;
    temp->forward = NULL;
    start = obj->next;
    ptr = start;
    if (ptr == NULL)
    {
        return;
    }
    if (ptr->forward == NULL)
    {
        ptr->forward = temp;
        temp->back = ptr;
    }
    else
    {
        while (ptr->forward != NULL)
        {
            ptr = ptr->forward;
        }
        ptr->forward = temp;
        temp->back = ptr;
    }
    while (start != NULL)
    {
        printf("%d", start->data);
        start = start->forward;
    }
}