#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *link;
};
struct stack
{
    char *str;
    int top;
};
struct Str
{
    char data;
    struct Str *link;
};
struct ndll
{
    struct ndll *back;
    int data;
    struct ndll *forward;
};
struct ndll2
{
    int data;
    struct ndll *next;
};

struct node *
createSLL(char str[])
{
    int n;

    struct node *head = NULL;
    struct node *nodes;
    struct node *prev;
    int key;
    struct node *obj = (struct node *)malloc(sizeof(struct node));
    printf("Enter no of nodes");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        nodes = (struct node *)malloc(sizeof(struct node));
        if (nodes != NULL)
        {
            printf("Enter node %d Key", i);
            scanf("%d", &key);
            nodes->data = key;
            nodes->link = NULL;
            if (i == 1)
            {
                head = nodes;
                prev = nodes;
            }
            else if (str == "cll" && i == n)
            {
                prev->link = nodes;
                nodes->link = head;
                prev = nodes;
            }
            else
            {
                prev->link = nodes;
                prev = nodes;
            }
        }
    }
    if (obj != NULL)
    {
        obj->data = n;
        obj->link = head;
        return obj;
    }
}

struct ndll2 *createDLL()
{
    int n;

    struct ndll *head = NULL;
    struct ndll *nodes;
    struct ndll *prev;
    int key;
    struct ndll2 *obj = (struct ndll2 *)malloc(sizeof(struct ndll2));
    printf("Enter no of nodes");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        nodes = (struct ndll *)malloc(sizeof(struct ndll));
        if (nodes != NULL)
        {
            printf("Enter node %d Key", i);
            scanf("%d", &key);
            nodes->data = key;
            nodes->forward = NULL;
            nodes->back = NULL;
            if (i == 1)
            {
                head = nodes;
                prev = nodes;
            }
            else
            {
                prev->forward = nodes;
                nodes->back = prev;
                prev = nodes;
            }
        }
    }
    if (obj != NULL)
    {
        obj->data = n;
        obj->next = head;
        return obj;
    }
}

struct stack *createDarr(int n)
{
    struct stack ptr;
    struct stack *ps;
    ptr.str = (char *)malloc(sizeof(char) * n);
    ptr.top = -1;
    ps = &ptr;
    return ps;
}

struct Str *createCharSll(char str[])
{
    int n;

    struct Str *head = NULL;
    struct Str *nodes;
    struct Str *prev;
    char key;
    struct Str *obj = (struct Str *)malloc(sizeof(struct Str));
    printf("Enter no of nodes");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        nodes = (struct Str *)malloc(sizeof(struct Str));
        if (nodes != NULL)
        {
            printf("Enter node %d Key", i);
            scanf(" %c", &key);
            nodes->data = key;
            nodes->link = NULL;
            if (i == 1)
            {
                head = nodes;
                prev = nodes;
            }
            else if (str == "cll" && i == n)
            {
                prev->link = nodes;
                nodes->link = head;
                prev = nodes;
            }
            else
            {
                prev->link = nodes;
                prev = nodes;
            }
        }
    }
    if (obj != NULL)
    {
        obj->data = n;
        obj->link = head;
        return obj;
    }
}

void stackPush(struct stack *ps, char ss, int n)
{
    if (ps->top != n - 1)
    {
        ps->top = ps->top + 1;
        *(ps->str + ps->top) = ss;
    }
}

char stackPop(struct stack *st)
{
    char ss;
    printf("%d", st->top);
    printf("%s", st->str);
    // if (ps->top != -1)
    // {
    //     ss = ps->str[ps->top];
    //     ps->top = ps->top - 1;
    //     return ss;
    // }
    return 's';
}
int countSll(struct node *ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    return count;
}