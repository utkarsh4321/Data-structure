
// prefix increment operator overloading

#include <iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    void print()
    {
        cout << real << "+" << imag << "i";
    }
    void setValue(int x, int y)
    {
        real = x;
        imag = y;
    }
    complex &operator++()
    {
        real++;
        imag++;
        return *this;
    }
    complex operator++(int) // here this int act as indicator for compiler that tells to compiler that treat it as post increment
    {
        complex temp = *this;
        ++*this;
        return temp;
    }
};

int main()
{
    complex s1, s2;
    s1.setValue(2, 4);
    s2.setValue(3, 5);
    complex s4 = s1++;
    ++s2;
    s2.print();
    s4.print();
    s1.print();
}
