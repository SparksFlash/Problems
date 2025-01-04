#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, row, col;
    cin >> t;
    while (t--)
    {
        int s[row][col];
        cin >> row >> col;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> s[i][j];
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (s[i][j] == '#')
                {
                    cout << i + 1 << " " << j + 1 << '\n';
                }
            }
        }
    }
}