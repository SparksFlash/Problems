#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans = 0;
        cin >> n >> m;
        while (n--)
        {
            string s;
            cin >> s;
            m = m - s.length();
            if (m >= 0)
                ans++;
        }
        cout << ans << '\n';
    }
}