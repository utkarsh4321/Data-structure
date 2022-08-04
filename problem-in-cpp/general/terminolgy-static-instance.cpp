#include <iostream>

using namespace std;

class Product
{
    int x, y;
    static int s;

public:
    void print_x_y()
    {
        cout << "x= " << x << " "
             << "y= "
             << " " << y << endl;
    }
    void set_x_y(int a, int b)
    {
        x = a;
        y = b;
    }
    static int get_s()
    {
        return s;
    }
    static void set_s(int a)
    {
        s = a;
    }
};

int main()
{

    Product p1;
    p1.set_x_y(23, 45);

    p1.print_x_y();
}