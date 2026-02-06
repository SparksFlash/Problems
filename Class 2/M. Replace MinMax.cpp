#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());

    for(int i=0; i<n; i++){
        if(v[i]==max)
            v[i] = min;
        else if(v[i]==min)
            v[i] = max;
        cout << v[i] << ' ';
    }
}