#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string old = s;
    string ne = s;
    reverse(ne.begin(), ne.end());
    if(old == ne)
       cout << "YES\n";
    else
       cout << "NO\n" ;
}