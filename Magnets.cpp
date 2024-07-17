#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1, s2;
    int cnt = 0;
    while (n--)
    {
        cin >> s1;
        if (s2 != s1)
            cnt++;
        s2 = s1;
    }
    cout << cnt;
}