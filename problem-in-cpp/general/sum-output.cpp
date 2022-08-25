#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int sum = 0;
    while (i < 100)
    {
        sum = sum + i;
        sum = sum + i;
        i += 1;
    }
    cout << sum;
}