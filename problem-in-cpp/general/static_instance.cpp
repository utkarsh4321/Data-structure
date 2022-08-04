#include <iostream>
using namespace std;

class student
{
public:
    int age;
    char name[20];
    float marks;
    void input();
    void printDetails();
    static int s;
};

void student::input()
{
    cout << "Enter the age,name and marks of student" << endl;
    cin >> age;
    cin.ignore();
    cin.getline(name, 20);
    cin >> marks;
};
void student::printDetails()
{
    cout << "age = " << age << endl;
    cout << "name = " << name << endl;
    cout
        << "marks = " << marks << endl;
}
int student::s;
int main()
{
    student s1;
    s1.age = 100;
    s1.s = 300;
    cout << student.s;
    s1.s = 34;
    cout << student::s;
}
