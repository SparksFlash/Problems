// 1551A - Polycarp and Coins
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int c2 = floor((double)(n + 1) / 3);
        int c1 = n - 2 * c2;
        cout << c1 << " " << c2 << "\n";
    }
}