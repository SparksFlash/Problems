#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
char s[N];
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin.getline(s, N);
        int len = strlen(s);

        bool is_good = false;
        for (int i = 0; i < len - 2; i++) {
            if ((s[i]=='1' && s[i+1]=='0' && s[i+2]=='1') ||
                (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')) {
                is_good = true;
                break;
            }
        }

        if (is_good) cout << "Good\n";
        else cout << "Bad\n";
    }
}