#include <stdio.h>

int Add(int a, int b)
{
    return a + b;
}
int com(int (*p)(int, int))
{
    return p(1, 3);
}
void name(int n)
{
    printf("%d", n);
}
void (*printMe(void))(int)
{
    void (*test)(int);
    test = name;
    return test;
}
void main()
{
    int result;
    printMe()(com(Add));
}