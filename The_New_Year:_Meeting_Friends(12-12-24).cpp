// 12-12-24
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int res;
    for (int i = 0; i < 3; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
        sort(v.begin(), v.end());
        res = (v[2] - v[1]) + (v[1] - v[0]);
    }
    cout << res << '\n';
}