#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of arry";
    cin >> n;
    int *aa;
    aa = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin >> aa[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << aa[k];
            }
            cout << "\n";
        }
    }
}