#include<bits/stdc++.h>
using namespace std;

void func(int ind, vector<int>&v){
    if(ind==0){
        if(ind%2==0) cout<<v[ind];
        return;
    }
    if(ind%2==0) cout<<v[ind]<<" ";
    func(ind-1, v);
}

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    func(n-1, v);
    cout<<endl;
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}