#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    unordered_set<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.insert(str[i]);
    }
    /// cout << s.size() << '\n';
    if (s.size() % 2 == 0)
        cout << "CHAT WITH HER!" << '\n';
    else
        cout << "IGNORE HIM!" << '\n';
}