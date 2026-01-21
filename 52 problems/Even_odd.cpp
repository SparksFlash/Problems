#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> r(n), s(m);
        for (auto &it : r)
            cin >> it;
        for (auto &it : s)
            cin >> it;
        string ss;
        cin >> ss;
        map<int, int>  count;
        map<int,vector<int>>step;
        int p = 0;
        for (int i = 0; i < k; i++)
        {
            if (ss[i] == 'L')
                p--;
            else
                p++;
            step[p].push_back(i);
        }
        sort(all(r));
        sort(all(s));
        for (int i = 0; i < n; i++)
        {
            int left = *--lower_bound(all(s), r[i]);
            auto rg = upper_bound(all(s), r[i]);
            int right = 0;
            if (rg != s.end())
                right = *rg;
            int time = 1e10;
            if (left < r[i])
            {
                left = r[i] - left;
                if(!empty(step[-left]))
                time = *min_element(all(step[-left]));
            }
            if (right > r[i])
            {
                right = right - r[i];
                if(!empty(step[right]))
                time = *min_element(all(step[right]));
            }
            count[time]++;
            //cout<<time<<" ";
        }
        //cout<<endl;
        int ans = n;
        for (int i = 0; i < k; i++)
        {
            cout << ans - count[i] << " ";
            ans = ans - count[i];
        }
        cout << "\n";
    }
    return 0;
}