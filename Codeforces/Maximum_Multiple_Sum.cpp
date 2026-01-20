/// B. 12.06.24
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
        if (n == 3)
            cout << "3\n";
        else
            cout << "2\n";
    }
}

// int findOptimalX(int n)
// {
//     int maxSum = 0;
//     int optimalX = 2;

//     for (int x = 2; x <= n; ++x)
//     {
//         int sum = 0;
//         for (int k = 1; k * x <= n; ++k)
//         {
//             sum += k * x;
//         }
//         if (sum > maxSum)
//         {
//             maxSum = sum;
//             optimalX = x;
//         }
//     }
//     return optimalX;
// }