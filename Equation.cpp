#include <bits/stdc++.h>
using namespace std;

long long get_power(int a, int n)
{
    long long power = 1;
    for (int i = 1; i <= n; i++)
    {
        power *= a;
    }
    return power;
}

int main()
{
    cout << get_power(5, 3);
}