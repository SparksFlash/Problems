// Fair Playoff
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (((a > b && c > d) && (a > d && c > b)) || ((a > b && c < d) && (a > c && d > b)) || ((a < b && c > d) && (b > d && c > a)) || ((a < b && c < d) && (b > c && d > a)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}