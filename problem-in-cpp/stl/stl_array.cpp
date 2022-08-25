#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 4> a = {10, 20, 30, 40};
    cout << a.front();
    array<int, 4>::iterator it;
    array<int, 4>::reverse_iterator ii;
    array<int, 4>::const_iterator ci;
    for (int x : a)
        cout << x;
    for (it = a.begin(); it != a.end(); it++)
    {
        cout << *it << "\n";
    }
    // for (int aa = 0; aa < 6; aa++)
    // {
    //     cout << a.at(aa); // out of range error
    // }
    for (ii = a.rbegin(); ii != a.rend(); ii++)
        *ii = *ii * 2;
    for (int x : a)
        cout << x << "\n";
    for (ci = a.cbegin(); ci != a.cend(); ci++)
    {
        cout << *ci;
    }
}
