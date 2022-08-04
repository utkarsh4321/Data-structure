#include <iostream>

using namespace std;
// in classes members are private by default but in structure members are public by default
struct student
{
private:
    int age;
    char name[20];
    float marks;

public:
    void printDetails()
    {
        cout << "name= " << name << "age= " << age << "marks= " << marks;
    };
    void input()
    {
        cout << "Enter name,age,marks" << endl;
        cin >> age;
        cin.ignore();
        cin.getline(name, 20);
        cin >> marks;
    };
};

int main()
{
    student s1;
    s1.input();
    s1.printDetails();
    cout << "Utkarsh";
}