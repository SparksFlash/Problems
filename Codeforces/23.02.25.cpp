// A. Do Not Be Distracted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        while (n--)
        {
            cin >> c;
            if (c != s.back())
                s.push_back(c);
        }
        set<char> set(s.begin(), s.end());
        cout << (s.size() == set.size() ? "YES" : "NO") << '\n';
    }
}
