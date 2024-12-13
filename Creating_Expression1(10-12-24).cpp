#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N];
int main()
{
    int n, x, sum = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }

    if (sum % x == 0)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}