#include <bits/stdc++.h>
using namespace std;

long long get_power(int a, int n)
{
    long long power = 1;
    for (int i = 1; i <= n; i++)
        power *= a;
    return power;
}

long long solve(int x, int n)
{
    long long sum = 0;
    for (int i = 0; i <= n; i += 2)
        sum += get_power(x, i);
    sum -= 1;
    return sum;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << solve(x, n) << '\n';
}