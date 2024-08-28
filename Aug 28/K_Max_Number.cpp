#include<bits/stdc++.h>
using namespace std;

void func(int ind, int &maxi, vector<int> &v){
    if(ind==-1) return;
    maxi = max(maxi, v[ind]);
    func(ind-1, maxi, v);
}

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    int maxi = -1e9;
    func(n-1, maxi, v);
    cout<<maxi<<endl;
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}