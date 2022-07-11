#include <stdio.h>
#include "defaut-ll.c"

struct Str *reverse(struct Str *ps)
{

    struct Str *prev = NULL;
    struct Str *ptr = NULL;
    struct Str *forward = ps;

    if (ps->link == NULL)
        return ps;
    while (forward != NULL)
    {
        printf("Hellow ");

        ptr = forward;
        forward = forward->link;
        ptr->link = prev;
        prev = ptr;
    }
    while (ptr != NULL)
    {
        printf("Hellow ");

        printf("%c", ptr->data);
        ptr = ptr->link;
    }
    return prev;
}
int isEqual(struct Str *start, struct Str *m, struct Str *ps)
{
    int equalFlag = 0;
    while (m != start)
    {
        if (ps == NULL)
        {
            equalFlag = 0;
            break;
        }

        if (start->data == ps->data)
        {
            equalFlag = 1;
        }
        else
        {
            equalFlag = 0;
            break;
        }
        start = start->link;
        ps = ps->link;
    }
    printf("%d eqaul flag\n", equalFlag);
    return equalFlag;
}

void main()
{
    struct Str *start;
    struct Str *middle;
    struct Str *header;
    struct Str *prev = NULL;
    struct Str *ptr = NULL;
    struct Str *next = NULL;
    int isPalindrome = 0;
    int n;
    int count = 1;
    start = createCharSll("");
    header = start->link;
    middle = start->link;
    n = start->data;
    if (header == NULL)
        isPalindrome = 0;
    else if (header->link == NULL)
        isPalindrome = 0;
    else
    {
        while (count <= n / 2)
        {
            count++;
            middle = middle->link;
        }
        if (n > 2)
        {

            printf("%c", middle->data);
            isPalindrome = isEqual(start->link, middle, reverse(middle->link));
            printf("%d is palindrome\n", isPalindrome);
        }
        else
        {
            if (header->data == middle->data)
            {
                isPalindrome = 1;
            }
        }
    }
    if (isPalindrome)
    {
        printf("Yes it is palindrome");
    }
    else
    {
        printf("No it is not palindrome");
    }
}