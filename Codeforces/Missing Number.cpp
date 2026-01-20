//test
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    int a[n];
    for (int i = 1; i < n; i++) // IMPORTANT NOTICE
    {
        cin >> a[i];
        ans ^= a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        ans ^= i;
    }
    cout << ans << '\n';
    return;
}

