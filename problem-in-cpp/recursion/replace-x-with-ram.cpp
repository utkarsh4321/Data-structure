#include <iostream>
#include <string.h>

using namespace std;

void replace(char str[])
{
    int l = strlen(str);
    if (l == 0)
        return;
    if (str[0] == str[1])
    {

        // for (int i = l; i > 0; i--)
        //     str[i + 2] = str[i];
        // str[0] = 'r';
        // str[1] = 'a';

        // str[2] = 'm';
        // replace(str + 3);
        for (int i = 0; i < l; i++)
            str[i] = str[i + 1];
        replace(str);
    }
    else
    {
        replace(str + 1);
    }
}

int main()
{
    char ss[] = "aaabbb";
    replace(ss);
    cout << ss;
}
