#include <stdio.h>
#include "defaut-ll.c"

void main()
{
    struct ndll2 *obj;
    struct ndll *start;
    struct ndll *temp;
    int key = 100;

    obj = createDLL();
    temp = (struct ndll *)malloc(sizeof(struct ndll));

    if (obj == NULL || temp == NULL)
        return;
    start = obj->next;
    temp->data = key;
    temp->back = NULL;
    temp->forward = start;
    start->back = temp;
    start = temp;
    while (start != NULL)
    {
        printf("%d", start->data);
        start = start->forward;
    }
}