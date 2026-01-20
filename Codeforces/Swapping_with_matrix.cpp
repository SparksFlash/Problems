#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N][N], n;

void swap_rows(int row1, int row2)
{
    for (int column = 1; column <= n; column++)
        swap(a[row1][column], a[row2][column]);
}

void swap_columns(int column1, int column2)
{
    for (int row = 1; row <= n; row++)
        swap(a[row][column1], a[row][column2]);
}

int main()
{
    int x, y;
    cin >> n >> x >> y;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    swap_rows(x, y);
    swap_columns(x, y);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}