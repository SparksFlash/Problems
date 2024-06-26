#include <bits/stdc++.h>
using namespace std;
const int N = 1000 + 10;
int a[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    if (n % 2 == 0)
    {
        for (int i = n - 1; i >= 1; i -= 2)
            cout << a[i] << ' ';
    }
    else
    {
        for (int i = n; i >= 1; i -= 2)
            cout << a[i] << ' ';
    }
}