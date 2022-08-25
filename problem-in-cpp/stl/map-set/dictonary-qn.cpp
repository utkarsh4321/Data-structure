#include <mystdc>

using namespace std;

class Dict
{
    string inp;
    map<string, int> m;
    set<string> s;

public:
    void getDicOrder(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> inp;
            s.insert(inp);
        }
        print(s);
    }
    void getDicOrderM(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> inp;
            m[inp] = m[inp] + 1;
        }
        printM(m);
    }
    void print(set<string> s2)
    {
        for (auto x : s2)
        {
            cout << x << endl;
        }
    }
    void printM(map<string, int> m)
    {
        for (auto x : m)
        {
            cout << x.first << "" << x.second << endl;
        }
    }
};

int main()
{
    Dict obj;
    int n;
    cin >> n;
    // obj.getDicOrder(n);
    obj.getDicOrderM(n);
}