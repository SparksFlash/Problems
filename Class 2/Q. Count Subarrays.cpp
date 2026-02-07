#include<bits/stdc++.h>
using namespace std;

void count_subarrays(vector<int> &v){
    int ans = 0;
    int n = v.size();
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
                bool is_non_decreasing = true;
            for (int k=i; k<j; k++){
                if(v[k] > v[k + 1]){
                    is_non_decreasing =false;
                    break;
                }
            }
            if(is_non_decreasing)ans++;
        }
    }
  cout << ans <<'\n';
}

int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        count_subarrays(v);
    }
}