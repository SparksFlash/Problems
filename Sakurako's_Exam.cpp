// DIV-3 Round 970
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if ((a % 2 == 1 or a + b == 1) or (a == 0 and b % 2 == 1))
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}