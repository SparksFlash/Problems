#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    unordered_set<char> st;

    while (cin >> c)
    {
        if (c >= 'a' && c <= 'z')
        {
            st.insert(c);
        }
    }
    cout << st.size() << '\n';
}