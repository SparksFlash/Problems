// Hackerrank
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << ' ';
    }
}
