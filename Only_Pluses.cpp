#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; ++i)
            cin >> a[i];
        for (int i = 1; i <= 5; ++i)
        {
            sort(a, a + 3);
            a[0] += 1;
        }
        cout << a[0] * a[1] * a[2] << '\n';
    }
    return 0;
}