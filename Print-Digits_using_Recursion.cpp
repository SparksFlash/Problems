#include <bits/stdc++.h>
using namespace std;
void print_digits(int n)
{
    if (n == 0)
        return;

    int last_digit = n % 10;
    int num_without_last_digit = n / 10;

    print_digits(num_without_last_digit);
    cout << last_digit << ' ';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            print_digits(n);
            cout << '\n';
        }
    }
}