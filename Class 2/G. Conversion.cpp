#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 +9;
char s[N];
int main(){
    cin.getline(s,N);
    int len = strlen(s);
    for(int i=0; i<len; i++){
        if (s[i] == ',')
           s[i] = ' ';
        else{
            if(isupper(s[i])){s[i] = tolower(s[i]);}
            else{s[i] = toupper(s[i]);}
        }
    }
    cout << s << '\n';
}