#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = s.length() / 2; i < s.length() - 1; i++)
    {
        cout << s[i] << "+";
    }
    cout << s[s.length() - 1];
    return 0;
}