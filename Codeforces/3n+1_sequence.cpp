#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, cnt = 0;
    cin >> n;
    while (n > 1)
    {
        if (n % 2 != 0)
        {
            n = 3 * n + 1;
            cnt++;
        }
        else
        {
            n = n / 2;
            cnt++;
        }
    }
    cout << cnt + 1 << '\n';
}