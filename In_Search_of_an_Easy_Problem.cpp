#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        if (k == 1)
        {
            cout << "HARD" << '\n';
            return 0;
        }
    }
    cout << "EASY" << '\n';
}