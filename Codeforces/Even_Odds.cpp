#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    n = (n + 1) / 2;
    if (k > n)
        cout << 2 * (k - n) << '\n';
    else
        cout << 2 * k - 1 << '\n';
}
