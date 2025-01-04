#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << max((4 * y + x + 14) / 15, (y + 1) / 2) << '\n';
    }
}