#include <iostream>

using namespace std;

class A
{
public:
    virtual void fun()
    {
        cout << "Base class"
             << "\n";
    }
};

class B : public A
{
public:
    void fun()
    {
        cout << "Derived class"
             << "\n";
    }
};

int main()
{
    B obj1;
    A obj2;
    // here ptr and ptr2 static type is A => base class
    A *ptr = &obj1;  // ptr => run time type is B ==> Derived class
    A *ptr2 = &obj2; // ptr2 => run time type is A ==> Base class
    obj1.fun();      // derived class
    obj2.fun();      // Base class
    ptr->fun();      // Derived class
    ptr2->fun();     // base class
    // above we performing late binding
}