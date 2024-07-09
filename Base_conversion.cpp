#include <bits/stdc++.h>
using namespace std;
void bin(unsigned n)
{
    if (n > 1)
        bin(n / 2);

    cout << n % 2;
}

int main(void)
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        bin(n);
        cout << '\n';
    }
}
