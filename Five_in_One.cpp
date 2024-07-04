#include <bits/stdc++.h>
using namespace std;

int get_maximum(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int get_minimum(int a[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

bool is_prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int count_primes(int a[], int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += is_prime(a[i]);
    }
    return count;
}

int count_divisors(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    return count;
}

int max_num_of_divisors(int a[])
{
}