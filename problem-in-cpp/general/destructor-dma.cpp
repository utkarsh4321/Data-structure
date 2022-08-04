#include <iostream>

using namespace std;

class complex
{
public:
    int real, imag;

    // default constructor with no arguments
    complex()
    {
        real = 0;
        imag = 0;
    }
    // parenthesis constuctor
    complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    // destructor
    ~complex()
    {
        cout << "Destructor called" << endl;
    }
    void printDetails()
    {
        cout << "Real part: " << real << endl;
        cout << "Imaginary part: " << imag << endl;
    }
    complex(complex &c)
    {
        real = c.real;
        imag = c.imag;
    }
    complex(complex &c, complex &t)
    {
        real = c.real + t.real;
        ;
        imag = c.imag + t.imag;
    }
};

int main()
{
    complex *ptr = new complex;
    ptr->printDetails();

    // complex c1;
    // complex c2(5, 6);
    // complex c3 = c2;
    // complex c4 = c3;
    // c1.printDetails();
    // c2.printDetails();
    // c3.printDetails();
    // c4.printDetails();
    // int *ptr = new int;
    // int *arr = new int[10];
    // delete ptr;
    // delete[] arr;
}
