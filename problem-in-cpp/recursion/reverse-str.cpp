#include <iostream>
#include <string.h>

using namespace std;

void reverse(char str[], int size)
{
    if (size <= 1)
        return;

    char temp;
    temp = str[0];
    str[0] = str[size - 1];
    str[size - 1] = temp;

    reverse(str + 1, size - 1);
}

int main()
{
    char str[] = "abadf";
    reverse(str, strlen(str));
    cout << str;
}