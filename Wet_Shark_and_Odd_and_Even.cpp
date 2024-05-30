#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum;
    int minimum_odd_number = 1e9 + 9;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] % 2 == 1)
        {
            minimum_odd_number = min(minimum_odd_number, a[i]);
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum << '\n';
    }
    else
    {
        cout << sum - minimum_odd_number << '\n';
    }
}