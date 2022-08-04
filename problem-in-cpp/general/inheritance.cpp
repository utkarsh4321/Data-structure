#include <iostream>
#include <string.h>

using namespace std;

class student
{
    char name[20];
    int rollno;

protected:
    void setName(char *p)
    {
        strcpy(name, p);
    }
    void setRollno(int r)
    {
        rollno = r;
    }

public:
    char *getName()
    {
        return name;
    }
    int getRollno()
    {
        return rollno;
    }
};

class physique : private student
{

    int height;
    int weight;

protected:
    void setHeight(int h)
    {
        height = h;
    }
    void setWeight(int w)
    {
        weight = w;
    }

public:
    int getHeight()
    {
        return height;
    }
    int getWeight()
    {
        return weight;
    }
    void setStudent(char *p, int r, int h, int w)
    {
        setName(p);
        setRollno(r);
        setHeight(h);
        setWeight(w);
    }
    char *getNames()
    {
        return getName();
    }
    int getRollnos()
    {
        return getRollno();
    }
};
class c : protected physique
{

public:
    void printMe(physique x)
    {
        cout << "Your name is " << x.getNames() << "\n"
             << "your roll no is " << x.getRollnos() << "\n"
             << "Your height is " << x.getHeight() << "\n"
             << "your weight is " << x.getWeight() << "\n";
    }
};

int main()
{
    physique s;
    c d3;
    s.setStudent("Raj", 1, 5, 50);
    cout << s.getNames() << endl;
    cout << s.getRollnos() << endl;
    cout << s.getHeight() << endl;
    cout << s.getWeight() << endl;
    d3.printMe(s);
    return 0;
}