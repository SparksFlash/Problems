#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = s.length(); i >= 0; i--)
        {
            if (s[i] == 'p')
                cout << 'q';
            if (s[i] == 'q')
                cout << 'p';
            if (s[i] == 'w')
                cout << 'w';
        }
        cout << '\n';
    }
}