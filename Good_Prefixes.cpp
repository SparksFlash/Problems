// C. 12.06.24
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 20;
int32_t main()
{
    int t, n, a[N];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = 0, ans = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            sum += a[i];

            if (2 * mx == sum)
                ans++;
        }
        cout << ans << '\n';
    }
}
