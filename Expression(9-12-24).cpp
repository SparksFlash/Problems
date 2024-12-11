#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int A = a + b * c;
    int B = a * (b + c);
    int C = a * b * c;
    int D = (a + b) * c;
    int E = a + b + c;

    auto Max = max({A, B, D, C, E});
    cout << Max << '\n';
}