#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s << '\n';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            cnt++;
    }
    cout << cnt << '\n';
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     vector<int> v;
//     v.reserve(t);
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         vector<int> prices(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> prices[i];
//         }
//         sort(prices.begin(), prices.end());

//         int maxCan = 1;
//         int ll = 0;

//         for (int rr = 1; rr < n; ++rr)
//         {
//             while (prices[rr] - prices[ll] > 1)
//             {
//                 ll++;
//             }
//             maxCan = max(maxCan, rr - ll + 1);
//         }

//         v.push_back(maxCan);
//     }

//     for (int i = 0; i < v.size(); ++i)
//     {
//         cout << v[i] << '\n';
//     }
// }

//     return 0;
// }

// // B AC
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         string s;
// //         cin >> s;
// //         int j = 0;

// //         for (int i = 0; i < s.length(); i++)
// //         {
// //             if (j > 0 && s[j - 1] != s[i])
// //             {
// //                 j--;
// //             }
// //             else
// //             {
// //                 s[j++] = s[i];
// //             }
// //         }
// //         if (j == 0)
// //         {
// //             cout << "YES" << '\n';
// //         }
// //         else
// //         {
// //             cout << "NO" << '\n';
// //         }
// //     }
// // }
