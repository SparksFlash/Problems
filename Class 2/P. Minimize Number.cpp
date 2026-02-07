#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int operation = 0;
    while(true){
        bool is_all_even = true;
        for(int i=0; i<n; i++){
            if(v[i] % 2 == 1){
               is_all_even = false;
               break;
            }
        }

        if(is_all_even){
           for(int i=0; i<n; i++){
              v[i] /= 2;
            }
           operation++;
        }else{
           break;
        }
    }
    cout << operation << '\n';
}