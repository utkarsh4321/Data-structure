#include <iostream>

using namespace std;

class complex
{
    int real, imag;

public:
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    void set(int r, int i)
    {
        real = r;
        imag = i;
    }
    friend complex operator+(complex, complex);
    friend complex operator++(complex s1)
    {
        s1.real = s1.real + 1;
        s1.imag = s1.imag + 1;
        return s1;
    }
};
complex operator+(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}
int main()
{
    complex s1, s2;
    s1.set(2, 3);
    s1.print();
    s2.set(4, 5);
    s2.print();
    complex s3 = s1 + s2;
    complex s4 = ++s3;
    s4.print();
    s3.print();
}