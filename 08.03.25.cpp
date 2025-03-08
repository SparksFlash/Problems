// Arithmetic array
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum == n)
            cout << 0 << '\n';
        else if (sum < n)
            cout << 1 << '\n';
        else
            cout << abs(sum) - n << '\n';
    }
}