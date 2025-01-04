/*
// O(n^3)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long ans = -1e18;

    for (int l = 0; l < n; l++)
    {
        for (int r = l; r < n; r++)
        {
            long long sum = 0;
            for (int i = l; i <= r; i++)
            {
                sum += a[i];
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << '\n';


// O(n^2)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long ans = -1e18;

    for (int l = 0; l < n; l++)
    {
        long long sum = 0;
        for (int r = l; r < n; r++)
        {
            sum += a[r];
            ans = max(ans, sum);
        }
    }
    cout << ans << '\n';
}
}*/

// O(n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long max_subarray_sum = -1e18;
    long long sum = -1e18;

    for (int l = 0; l < n; l++)
    {
        sum = max((long long)a[l], sum + a[l]);
        max_subarray_sum = max(max_subarray_sum, sum);
    }
    cout << max_subarray_sum << '\n';
}