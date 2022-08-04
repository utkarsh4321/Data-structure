#include <iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    void set_data(int r, int i)
    {
        this->real = r;
        this->imag = i;
    }
    void display()
    {
        cout << "(" << real << " + " << imag << "i)" << endl;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real = this->real + c.real;
        temp.imag = this->imag + c.imag;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3, c4;
    c1.set_data(2, 3);
    c1.display();
    c2.set_data(4, 5);
    c2.display();
    c3 = c1.operator+(c2);
    c3.display();
    // we can also call opertor+ as c4 = c1 + c2;
    c4 = c1 + c2; // opertor overloading
    // here we gave new meaning to + operator so that it can also work with user define data type like complex
    // The advantage of operator overloading is abstraction. Now common people will use + operator to add two complex numbers.
    c4.display();

    return 0;
}