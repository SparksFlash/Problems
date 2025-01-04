// With my ternary and general soln.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        s.length() > 10 ? cout << s[0] << s.length() - 2 << s[s.length() - 1] : cout << s;
        cout << '\n';

        // if (s.length() > 10)
        // {
        //     cout << s[0] << "" << s.length() - 2 << "" << s[s.length() - 1] << '\n';
        // }
        // else
        // {
        //     cout << s << '\n';
        // }
    }
}
