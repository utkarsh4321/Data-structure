#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    void printDetails()
    {
        cout << real << " <----> " << imag << endl;
    };
    void setVar(int a, int b)
    {
        real = a;
        imag = b;
    }
    // Complex()
    // {
    //     real = 0;
    //     imag = 0;
    // }
    Complex(int a, int b)
    {
        real = a;
        imag = b;
    }
};

int main()
{
    Complex c1;
    Complex c2(2, 3);
    Complex c3 = c2;
    c1.printDetails();
    c2.printDetails();
}