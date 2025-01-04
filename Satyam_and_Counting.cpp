// Div - 4 D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, T;
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> n;
        vector<vector<int>> pt(n + 1, vector<int>(2));
        for (int i = 1, x, y; i <= n; i++)
        {
            cin >> x >> y;
            pt[x][y]++;
        }
        ll ans = 0;
        for (int i = 0; i <= n; i++)
        {
            int a = pt[i][0], b = pt[i][1];
            ans += 1ll * a * b * (n - a - b);
        }
        for (int i = 0; i <= n - 2; i++)
        {
            ans += 1ll * pt[i][0] * pt[i + 2][0] * pt[i + 1][1];
            ans += 1ll * pt[i][1] * pt[i + 2][1] * pt[i + 1][0];
        }
        cout << ans << endl;
    }
    return 0;
}