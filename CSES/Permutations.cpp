#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin >> n;
    int a[n];
    int even = 2;
    for (int i = 0; i < floor(n / 2); i++)
    {
        a[i] += even;
        even += 2;
    }

    int odd = 1;
    for (int i = ((n / 2) + 1); i < n; i++)
    {
        a[i] += odd;
        odd += 2;
        cout << a[i];
    }
}
