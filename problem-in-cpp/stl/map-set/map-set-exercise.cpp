#include <mystdc>

using namespace std;

int main()
{
    set<int> intset = {20, 10, 30};
    cout << intset.size();
    set<int>::iterator it;
    set<int, greater<int>> intset2 = {40, 10, 90}; // return the element in decreasing order
    // intset2.insert(40); //ignore that duplicate values are not allowed
    intset2.insert(55); // insert the element at the end of the set
    it = intset2.find(100);
    it = intset2.end();

    cout << "yes element present" << *it << "\n";
    if (intset2.count(100)) // return 0 or 1 and check element present or not we can also use it as find
    {
        cout << "Element  present in set";
    }
    else
    {
        cout << "Element  not present in set";
    }
    cout << "\n";
    for (auto x : intset2)
    {
        cout << x;
    }
}