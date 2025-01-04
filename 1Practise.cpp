// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 int temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         cout << a[i] << ' ';
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, j, i;
    cin >> n >> k;
    for (i = 0; i <= n - 1; i = i + k)
    {
        for (j = i + 1; j <= k; j++)
        {
            cout << i << ' ' << j;
        }
        cout << '\n';
    }
}