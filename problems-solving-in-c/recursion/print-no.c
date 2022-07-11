#include <stdio.h>

void printNo(int n)
{
    if (n <= 0)
        return;

    printf("%d", n);
    printNo(--n);
}

void main()
{
    printNo(5);
}