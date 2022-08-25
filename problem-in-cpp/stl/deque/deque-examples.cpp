#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq = {1, 2, 3, 4};
    deque<int>::iterator it;
    // cout << dq.size();
    // dq.push_front(11);

    dq.insert(dq.begin(), 100);
    dq.insert(dq.begin() + 2, 9000); // insert element at 3 place by skipping the 2 element from the deque
    // cout << dq.front() << dq.back();
    // cout << dq.at(2);
    deque<int> dq2;
    dq.swap(dq2);
    // for (it = dq.begin(); it != dq.end(); it++)
    // {
    //     cout << *it << "\n";
    // }

    // dq2.erase(dq2.begin() + 1); // delete 2nd element from the deque

    for (it = dq2.begin(); it != dq2.end(); it++)
    {
        cout << *it << "\n";
    }
    dq2.clear();
    bool ram = dq2.empty();
    cout << "size" << dq2.size();
    cout << ram;
}