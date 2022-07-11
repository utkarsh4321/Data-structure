#include<iostream>

using namespace std;


void TOH(int n, char source, char destination, char helper)
{
    if (n == 1)
        cout<<source<<"->"<<destination<<endl;
    else
    {
        TOH(n - 1, source, helper, destination);
        cout<<source<<"->"<<destination<<endl;
        TOH(n - 1, helper, destination, source);
    }
}

int main()
{
    TOH(3, 'S', 'D', 'H');
}