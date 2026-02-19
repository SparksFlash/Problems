#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 9;
char s[N], t[N];
int main(){
    int test_case;
    cin >> test_case;
    while (test_case--){
        cin >> s >> t;
        int len_s = strlen(s);
        int len_t = strlen(t);
        for (int i = 0; i < max(len_s, len_t); i++){
            if (i < len_s){
                cout << s[i];
            }

            if (i < len_t){
                cout << t[i];
            }
        }
        cout << '\n';
    }
}
