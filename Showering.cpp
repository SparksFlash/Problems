// Div-4 C
// solved
// Code Expired
// Understood
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, s, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> s >> m;
        int p = 0;
        string ans = "NO";
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a - p >= s)
            {
                ans = "YES";
            }
            p = b;
        }
        if (m - p >= s)
        {
            ans = "YES";
        }
        cout << ans << endl;
    }
}