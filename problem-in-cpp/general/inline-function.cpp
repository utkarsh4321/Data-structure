#include <iostream>
using namespace std;
inline int Add(int, int = 0, int = 0); // inline helps us to make our code optimized by using compiler


int main()
{
    int n, result;
    cout << "Enter a number";
    cin >> n;
    result = Add(n);
    cout<<"The sum is:"<<result;
}
int Add(int a, int b, int c)
{
    return a + b + c;
}