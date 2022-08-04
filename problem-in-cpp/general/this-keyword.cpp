#include <iostream>

using namespace std;

class complex
{
    int real, imag;

public:
    void set_data(int r, int i)
    {
        this->real = r;
        this->imag = i; // this will hold the address of caller object
    }
    void display()
    {
        cout << "(" << real << " + " << imag << "i)" << endl;
    }
};

int main()
{
    complex c;
    c.set_data(2, 3);
    c.display();
    return 0;
}