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
        cout << s.substr(0, s.size() - 2) + 'i' << '\n';
    }
}
