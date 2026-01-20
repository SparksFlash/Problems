// 1996A - DIV 3
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = (n / 2) - (n / 4);
        cout << ans << '\n';
    }
}

// or
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int t;
//      cin >> t;
//      while (t--)
//      {
//          int n;
//          cin >> n;
//          cout << (n + 2) / 4 << '\n';
//      }
//  }
                  