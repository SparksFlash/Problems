// Div4 - B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a >= c && b > d || a > c && b >= d)
            ans++;
        if (a >= d && b > c || a > d && b >= c)
            ans++;
        cout << ans * 2 << endl;
    }
}
