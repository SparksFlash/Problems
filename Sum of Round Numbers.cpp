    #include<bits/stdc++.h>
    using namespace std;
    int main() {
      int t, n;
      cin >> t;
      while (t--) {
        vector < int > v;
        cin >> n;
        int i = 10;
        while (n) {
          if (n % i != 0)
            v.push_back(n % i), n = n - (n % i);
          i *= 10;
          cout << v.size() << endl;
          for (auto it: v)
            cout << it << " ";
          cout << endl;
        }
      }
    }