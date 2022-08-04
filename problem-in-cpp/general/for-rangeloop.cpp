#define ABC 11;
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {
        1,
        2,
        3,
        4,
        4,
        5,
    };
    for (int n : arr)
    {
        cout << n << endl;
    }
#ifndef ABC
    cout << ABC;
#elifdef ABC
    cout << "This is define" << ABC;
#endif
}