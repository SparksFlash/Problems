// DIV - 4 Round 971
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
        int pos[505];

        for (int i = 0; i < n; i++)
        {
            char row[5];
            cin >> row;
            for (int j = 0; j < 4; j++)
            {
                if (row[j] == '#')
                {
                    pos[i] = j + 1;
                    break;
                }
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            cout << pos[i] << " ";
        }
        cout << '\n';
    }
}
