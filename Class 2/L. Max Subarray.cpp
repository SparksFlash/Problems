#include<bits/stdc++.h>
using namespace std;

void max_subarray(vector<int> &v){
    int n = v.size();
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int maximum = -1e6;
            for(int k=i; k<=j; k++){
                maximum = max(maximum,v[k]);
            }
             cout << maximum << ' ';
        }
    }
    cout << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        max_subarray(v);
    }
}