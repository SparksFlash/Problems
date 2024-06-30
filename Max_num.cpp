#include <bits/stdc++.h>
using namespace std;

int findMaxRec(int a[], int n)
{
    if (n == 1)
        return a[0];
    return max(a[n - 1], findMaxRec(a, n - 1));
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << findMaxRec(a, n) << '\n';
}
