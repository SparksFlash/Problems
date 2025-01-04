#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a.length(); i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    cout << a.compare(b) << '\n';
}