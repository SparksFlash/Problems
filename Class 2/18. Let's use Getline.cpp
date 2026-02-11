#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 +9;
char s[N];
int main(){
    cin.getline(s,N);
    int len = strlen(s);
    for(int i=0; i<len; i++){
        if (s[i] == '\\')
           break;
        
       cout << s[i];
    }
    cout << '\n';
}