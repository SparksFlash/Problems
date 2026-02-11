#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.length();
    int sum = 0;
    for(int i=0; i<len; i++){
        sum += s[i] - '0';       //0=48 ASCII value
    }
    cout << sum << '\n';
}