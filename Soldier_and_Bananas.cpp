#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, total = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        total += k * i;
    }
    if (total > n)
        cout << total - n << '\n';
    else
        cout << 0 << '\n';
}