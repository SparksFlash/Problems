#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
int a[N], cnt = 0;

int sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    cout << sort(a, n);
}