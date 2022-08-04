
#include <iostream>

using namespace std;
// function template
template <typename T>
T add(T a, T b)
{
    return a + b;
}
template <typename T>
class MyClass
{
    T a;
    T b;

public:
    T add()
    {
        return a + b;
    }

    MyClass(T aa, T bb)
    {
        this->a = aa;
        this->b = bb;
    }
};

int main()
{
    MyClass aa(22.45, 45.00);
    cout << aa.add() << endl;
    cout << add(1, 2) << endl;
    cout << add(1.1, 2.32) << endl;
    cout << add(1.0f, 2.0f) << endl;

    return 0;
}
