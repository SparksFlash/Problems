// #include <bits/stdc++.h>
// using namespace std;
// void bin(unsigned n)
// {
//     if (n > 1)
//         bin(n / 2);

//     cout << n % 2;
// }

// int main(void)
// {
//     int t, n;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         bin(n);
//         cout << '\n';
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int a[10], n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; n > 0; i++)
        {
            a[i] = n % 2;
            n = n / 2;
        }
        for (int i = i - 1; i >= 0; i--)
        {
            cout << a[i];
        }
    }
}