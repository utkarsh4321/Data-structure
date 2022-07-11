#include <stdio.h>
void name(int);

void (*p(void))(int)
{
    return name;
}

void name(int n)
{
    printf("%d", n);
}

int main()
{
    p()(90);
}