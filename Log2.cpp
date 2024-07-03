#include <bits/stdc++.h>
using namespace std;
int floor_log2_n(long long n)
{
    if (n == 1)
        return 0;

    int number_of_divisions = 1;
    number_of_divisions += floor_log2_n(n / 2);
    return number_of_divisions;
}
int main()
{
    long long n;
    cin >> n;
    cout << floor_log2_n(n) << '\n';
    return 0;
}
