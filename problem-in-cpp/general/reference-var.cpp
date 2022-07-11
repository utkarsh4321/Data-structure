#include<iostream>
using namespace std;
 



int main(){
    int x = 10;
    int c = 22;
    int &y = x;  // y is reference to x now c memory location have both label x,y
 //here &y is the constant variable so we can't change it
 // The above statement we can think of like const int &y = x; so here we can't reassign the value to it
    cout<<y<<endl;
    cout<<x<<endl;
    cout<<&y<<endl;
    cout<<&x<<endl;

}