#include <stdio.h>

void main()
{
    char name[20];
    printf("Enter a number");
    scanf("%[^\n]s", name);
    printf("%s", name);
}