#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, solve = 0;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 1 && b == 1) || (b == 1 && c == 1) || (c == 1 && a == 1))
        {
            solve++;
        }
    }
    cout << solve << '\n';
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T, ans = 0;
//     cin >> T;
//     while (T--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         ans += (a + b + c >= 2);
//     }
//     cout << ans;
// }