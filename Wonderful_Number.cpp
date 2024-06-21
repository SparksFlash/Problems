#include <bits/stdc++.h>
using namespace std;
bool is_odd(int n)
{
    return n % 2 == 1;
}

string toBinary(long n)
{
    string binary = "";
    while (n > 0)
    {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n = n / 2;
    }
    return binary;
}

bool isPalindrome(const string &str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main()
{
    long n;
    cin >> n;
    string binary = toBinary(n);
    if (is_odd(n) and isPalindrome(binary))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
