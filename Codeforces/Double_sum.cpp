// https://atcoder.jp/contests/abc351/tasks/abc351_f
// E
#include <bits/stdc++.h>
using namespace std;
const int N = 4e5 + 5;
long long n, ans, a[N];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ans += a[i] * (i - 1);
    }
    // cout << "ans = " << ans << "\n";
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        // check cout << "sorted = " << a[i] << '\n';
        ans -= a[i] * (n - i);
    }
    cout << ans;
}