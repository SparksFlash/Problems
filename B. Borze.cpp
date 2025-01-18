#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
            cout << '0';
        if (s[i] == '-' && s[i] == '.')
        {
            cnt++;
        }
        cout << cnt;
    }
    return 0;
}