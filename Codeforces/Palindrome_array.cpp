#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N];

bool is_palindrome(int a[], int n)
{
    for (int i = 1; i <= n / 2; i++)
    {
        if (a[i] != a[n - i + 1])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    if (is_palindrome(a, n))
        cout << "YES\n";
    else
        cout << "NO\n";
}