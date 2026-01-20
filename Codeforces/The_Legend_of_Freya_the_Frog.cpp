// Div-4 C (05-09-2024)
#include <bits/stdc++.h>
using namespace std;
int t, x, y, k;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> k;
        cout << max((x + k - 1) / k * 2 - 1, (y + k - 1) / k * 2) << '\n'; // ceil
    }
}