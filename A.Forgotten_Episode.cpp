#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        int x;
        cin >> x;
        ans ^= x;
    }

    for (int i = 1; i <= n; i++)
    {
        ans ^= i;
    }
    cout << ans << '\n';
}