#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << (is_sorted(s.begin(), s.end()) ? "Yes" : "NO") << '\n';
    }
}