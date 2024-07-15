// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n, k;
//     cin >> n >> k;
//     n = (n + 1) / 2;
//     if (k > n)
//         cout << 2 * (k - n) << '\n';
//     else
//         cout << 2 * k - 1 << '\n';
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2 << '\n';
    else
        cout << -((n / 2) + 1) << '\n';
}