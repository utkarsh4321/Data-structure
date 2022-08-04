#include <mystdc>

using namespace std;

int main()
{
    int flag = 1;
    int a[] = {3, 2, 9, 1, 0, 3};
    int b[] = {9, 1, 0, 3, 2, 3};

    sort(a, a + 6);
    sort(b, b + 6);
    for (int i = 0; i < 6; i++)
    {
        if (a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "YES both are equal" << endl;
    }
    else
    {
        cout << "NO both are note equal" << endl;
    }
    stack<int> stacks;
    stacks.push(21);
    cout << "stack is " << stacks.top() << endl;
    return 0;
}