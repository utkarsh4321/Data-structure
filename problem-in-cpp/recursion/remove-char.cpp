#include <iostream>
#include <string.h>

using namespace std;

void itr(int i, int l, char input[])
{
    if (i > l)
        return;
    input[i] = input[i + 1];
    itr(i + 1, l, input);
};
void replace(char input[])
{

    int l = strlen(input);
    if (l == 0)
        return;
    if (input[0] == 'x')
    {

        itr(0, l, input);

        replace(input);
    }
    else
    {
        replace(input + 1);
    }
};

int main()
{
    char in[] = "axbvxxxss";
    replace(in);
    cout << in;
}