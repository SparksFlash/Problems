#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    while (n--)
    {
        int type;
        string x;
        cin >> type >> x;

        if (type == 1)
        {
            int y;
            cin >> y;
            m[x] += y;
        }
        else if (type == 2)
        {
            m[x] = 0;
        }
        else
        {
            cout << m[x] << '\n';
        }
        return 0;
    }
}