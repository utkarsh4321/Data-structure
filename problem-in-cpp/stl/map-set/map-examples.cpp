#include <mystdc>

using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "hello";
    m[6] = "ram";
    m[2] = "ranga";
    m[5];
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    m.count(2);     // if key present in map it will return 1 else return 0
    it = m.find(6); // if element present it will return the iterator of it otherwise it will return the m.end()

    if (it != m.end())
    {
        cout << "Element present in the map";
    }
    else
    {
        cout << "Element not present in the map";
    }
    // it = m.begin();
    // cout << it->first << it->second;
    // in order to delete the particular elements use map.erase()
    m.erase(5); // erase the 5th key entry from the map
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}