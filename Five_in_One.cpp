#include <bits/stdc++.h>
using namespace std;

int get_maximum(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int get_minimum(int a[], int n)
{
    int min = INT_MAX;
    for (int i = 1; i <= n; i++)
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

int max_num_of_divisors(int a[], int n)
{
    int max_divisor_count = INT_MIN;
    int number = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int divisor_count = count_divisors(a[i]);
        if (divisor_count > max_divisor_count)
        {
            max_divisor_count = divisor_count;
            number = a[i];
        }
        else if (max_divisor_count == divisor_count)
        {
            number = max(number, a[i]);
        }
    }
    return number;
}

bool is_palindrome(int n)
{
    int original_number = n;
    int reversed_number = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        reversed_number = reversed_number * 10 + last_digit;
        int number_without_last_digit = n / 10;
        n = number_without_last_digit;
    }
    return reversed_number == original_number;
}

int count_palindromes(int a[], int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += is_palindrome(a[i]);
    }
    return count;
}

void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << "The maximum number : " << get_maximum(a, n) << '\n';
    cout << "The minimum number : " << get_minimum(a, n) << '\n';
    cout << "The number of prime numbers : " << count_primes(a, n) << '\n';
    cout << "The number of palindrome numbers : " << count_palindromes(a, n) << '\n';
    cout << "The number that has the maximum number of divisors : " << max_num_of_divisors(a, n) << '\n';
}

int main()
{
    solve();
    return 0;
}