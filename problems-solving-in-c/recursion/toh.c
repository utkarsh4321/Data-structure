#include <stdio.h>

void TOH(int n, char source, char destination, char helper)
{
    if (n == 1)
        printf("%c->%c\n", source, destination);
    else
    {
        TOH(n - 1, source, helper, destination);
        printf("%c->%c\n", source, destination);
        TOH(n - 1, helper, destination, source);
    }
}

void main()
{
    TOH(3, 'S', 'D', 'H');
}