#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    int even = 2;
    if (n == 3 || n == 2)
    {
        cout << "NO SOLUTION\n";
    }
    else
    {
        for (int i = 0; i < floor(n / 2); i++)
        {
            a[i] += even;
            even += 2;
            cout << a[i] << ' ';
        }

        int odd = 1;
        for (int i = ((n / 2)); i < n; i++)
        {
            a[i] += odd;
            odd += 2;
            cout << a[i] << ' ';
        }
    }
}
