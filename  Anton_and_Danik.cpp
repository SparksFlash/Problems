// Easy
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt1 = 0, cnt2 = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    if (cnt1 > cnt2)
        cout << "Anton" << '\n';
    else if (cnt2 > cnt1)
        cout << "Danik" << '\n';
    else
        cout << "Friendship" << '\n';
}