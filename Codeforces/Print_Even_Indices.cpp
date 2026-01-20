// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1000 + 10;
// int a[N];
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//         cin >> a[i];

//     if (n % 2 == 0)
//     {
//         for (int i = n - 1; i >= 1; i -= 2)
//             cout << a[i] << ' ';
//     }
//     else
//     {
//         for (int i = n; i >= 1; i -= 2)
//             cout << a[i] << ' ';
//     }
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1009;
int a[N];

void print_even_indices_in_reverse(int i)
{
    if (i < 0)
        return;
    if (i % 2 == 0)
    {
        cout << a[i] << ' ';
    }
    print_even_indices_in_reverse(i - 1);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    print_even_indices_in_reverse(n - 1);
}
