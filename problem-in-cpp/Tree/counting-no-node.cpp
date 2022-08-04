#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int a)
    {
        data = a;
        next = NULL;
    }
    Node()
    {
        cout << "Ranga here is";
    }
};

int main()
{
    int a;
    int n;
    cout << "Enter length of Link List" << endl;
    cin >> n;
    Node *start = NULL;
    Node *end = NULL;
    Node *ptr = NULL;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter data for node" << i << endl;
        cin >> a;
        ptr = new Node(a);
        if (start == NULL)
        {
            start = ptr;
            end = ptr;
        }
        else
        {
            end->next = ptr;
            end = ptr;
        }
    }
    while (start != NULL)
    {

        cout << "Dat = " << start->data;
        start = start->next;
    }
}
