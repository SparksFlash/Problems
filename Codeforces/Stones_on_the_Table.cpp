/// 266/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, ans = 0;
    cin >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        if (s[i] == s[i + 1])
        {
            ans++;
        }
    }
    cout << ans << '\n';
}