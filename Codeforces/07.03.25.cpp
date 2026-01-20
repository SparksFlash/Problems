// Odd set
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, e = 0, o = 0;
        cin >> n;
        int a[N];
        for (int i = 1; i <= 2 * n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= 2 * n; i++)
        {
            if (a[i] % 2 == 0)
                e++;
            else
                o++;
        }

        if (e == o)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}
