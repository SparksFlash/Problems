#include <bits/stdc++.h>
using namespace std;

int fibo(int pos)
{
    if (pos == 1)
        return 0;
    else if (pos == 2)
        return 1;
    else
        return fibo(pos - 1) + fibo(pos - 2);
}

int main()
{
    int num;
    cin >> num;
    cout << fibo(num) << '\n';
}