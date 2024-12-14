#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int inrcrement = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        while (a > 0)
        {
            if (a % b == 0)
            {
                cout << 0 << '\n';
                break;
            }
            else
            {
                a++;
                inrcrement++;
            }
        }
    }
    cout << inrcrement << '\n';
}