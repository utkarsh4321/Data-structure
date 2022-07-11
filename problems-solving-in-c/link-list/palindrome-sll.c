#include <stdio.h>
#include <string.h>
#include "defaut-ll.c"

void main()
{
    struct Str *start;
    struct stack *dt;
    struct Str *ptr;
    int n;
    int isPalindrome = 0;
    struct Str *obj;
    char ss;

    obj = createCharSll("");
    if (obj == NULL)
        return;
    start = obj->link;
    n = obj->data;
    ptr = start;
    // printf("%c", start->data);
    dt = createDarr(n);
    // printf("%d", dt->str);
    while (ptr != NULL)
    {
        stackPush(dt, ptr->data, n);
        ptr = ptr->link;
    }

    // ptr = start;
    printf("%c", *(dt->str + 1));
    printf("%c", stackPop(&dt));
    // // printf("%s", dt->str);
    // while (ptr != NULL)
    // {
    //     printf("%c", ptr->data);
    //     printf("%d", dt->top);
    //     printf("%s", dt->str);
    //     // if (dt->top != -1)
    //     // {
    //     //     ss = dt->str[dt->top];
    //     //     dt->top = dt->top - 1;
    //     // }
    //     // if (ptr->data == ss)
    //     // {
    //     //     isPalindrome = 1;
    //     // }
    //     // else
    //     // {
    //     //     isPalindrome = 0;
    //     //     break;
    //     // }
    //     ptr = ptr->link;
    // }
    // if (isPalindrome)
    // {
    //     printf("This is link list is palindrome");
    // }
    // else
    // {
    //     printf("This link list is not palindrome");
    // }
}