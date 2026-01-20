// #include <bits/stdc++.h>
// using namespace std;

// int findMaxRec(int a[], int n)
// {
//     if (n == 1)
//         return a[0];
//     return max(a[n - 1], findMaxRec(a, n - 1));
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << findMaxRec(a, n) << '\n';
// }

#include <iostream>
using namespace std;
const int N = 1009;
const int inf = 1e9;
int n, a[N];

int get_max(int i)
{
    if (i > n)
    {
        return -inf;
    }
    return max(a[i], get_max(i + 1));
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << get_max(1) << '\n';
    return 0;
}
