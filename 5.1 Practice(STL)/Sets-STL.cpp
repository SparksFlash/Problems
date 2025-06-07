#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> s;

    while (n--)
    {
        int y, x;
        cin >> y >> x;
        if (y == 1)
            s.insert(x);
        if (y == 2)
            s.erase(x);
        if (y == 3)
        {
            if (s.find(x) != s.end())
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
    }
}