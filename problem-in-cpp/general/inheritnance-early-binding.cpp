#include <iostream>
#include <string.h>

using namespace std;

class A
{
    float salary;

public:
    float getSalary()
    {
        return salary;
    }
    A(float x = 0.0)
    {
        salary = x;
    }
};
class B
{
    float bonus;

public:
    float getBonus()
    {
        return bonus;
    }
    B(float y = 0.0)
    {
        bonus = y;
    }
};
class firstName
{
    string str;

protected:
    string getFirstName()
    {
        return str;
    }
    firstName(string ss = "ut")
    {
        str = ss;
    }
};
class lastName : private firstName
{
    string strl;

public:
    string getFullName()
    {

        return getFirstName() + " " + strl;
    }
    lastName(string ss = "ut", string ssl = "sri") : firstName(ss)
    {
        strl = ssl;
    }
};
class C : private A, private B, public lastName
{
public:
    float showTot()
    {
        return getSalary() + getBonus();
    }
    C(float s, float b, string first, string last) : A(s), B(b), lastName(first, last)

    {
    }
};

int main()
{
    string a;
    string b;
    cout << "Please inter your first name and last name: " << endl;
    cin >> a >> b;
    C obj(10.33, 45.34, a, b);
    cout << obj.showTot() << "\n";
    cout << obj.getFullName() << endl;
}
