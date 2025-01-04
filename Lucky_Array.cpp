#include <bits/stdc++.h>
using namespace std;

int min_element(int a[], int n)
{
    int min = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int minimum = min_element(a, n);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (minimum == a[i])
            count++;
    }
    // cout << count;

    if (count % 2 == 0)
        cout << "Unlucky" << '\n';
    else
        cout << "Lucky" << '\n';
}