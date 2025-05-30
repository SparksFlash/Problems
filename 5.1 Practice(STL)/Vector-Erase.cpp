#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, a, b;
    cin >> n >> x >> a >> b;
    int val;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> val;
        v.push_back(val);
    }

    for (int i = 1; i <= v.size(); i++)
    {
        v.erase(v.begin() + 1, v.end() - 2);
        cout << v.size() << '\n';
        cout << v[i] << ' ';
    }
}