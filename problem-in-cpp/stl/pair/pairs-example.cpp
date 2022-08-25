#include <mystdc>

using namespace std;

int main()
{
    // pair<int, string> p(22, "ram");
    // pair<int, string> pt = make_pair(23, "shweta");
    // cout << p.first << pt.first;
    // cout << p.second << pt.second;
    // pair<int, int> pa[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> pa[i].first;
    //     cin >> pa[i].second;
    // }
    // swap(pa[0], pa[1]);

    // for (auto x : pa)
    // {
    //     cout << x.first;
    //     cout << x.second;
    // }
    // int a, b;
    // cin >> a >> b;
    // vector<pair<int, int>> vp = {{a, b}};
    // for (auto x : vp)
    // {
    //     cout << x.first << " " << x.second;
    // }
    vector<int> v[4]; // array of integer vector
    for (int i = 0; i < 4; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (auto x : v)
    {
        for (auto y : x)
        {
            cout << y << "\n";
        }
    }
}