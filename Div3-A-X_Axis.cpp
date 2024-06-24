// 23.06.24
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x1, x2, x3;
//         cin >> x1 >> x2 >> x3;
//         int points[3] = {x1, x2, x3};
//         sort(points, points + 3);
//         int median = points[1];
//         int total_distance = abs(points[0] - median) + abs(points[1] - median) + abs(points[2] - median);
//         cout << total_distance << '\n';
//     }
// }

// shayan
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        cout << max({x1, x2, x3}) - min({x1, x2, x3}) << '\n';
    }
}
