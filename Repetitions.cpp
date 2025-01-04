#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt = 1, ans = 1;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    cout << ans << '\n';
}