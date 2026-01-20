#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string r;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        r = s;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1])
                swap(s[i], s[i - 1]);
        }
        if (r == s)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n'
                 << s << '\n';
    }
}