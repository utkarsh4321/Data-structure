#include<iostream>
using namespace std;

struct student {
    int age;
    char name[20];
    float marks;
    void input(){
        cout<<"Enter the age,name and marks of student"<<endl;
        cin>>age;
        cin.ignore();
        cin.getline(name,20);
        cin>>marks;

    };
    void printDetails(){
        cout<<"age = "<<age<<endl;
        cout<<"name = "<<name<<endl;
        cout
        <<"marks = "<<marks<<endl;
    }
};

int main(){
    student s1;
    s1.input();
    s1.printDetails();
}