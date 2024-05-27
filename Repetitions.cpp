#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt = 1;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
            if (s[i] != s[i + 1])
            {
                break;
                cnt == 0;
            }
        }
    }
    cout << cnt << '\n';
}