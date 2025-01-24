#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p, x;
        cin >> p >> x;
        if (p == 0)
            v.push_back(x);
        else if (p == 1)
            v.pop_back();
        // if (p == 2)
        //     v.push_back(x);
    }
}