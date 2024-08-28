#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    n -= 1;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    vector<int> ans(n+1);
    ans[0] = v[0];
    ans[n] = v[n-1];
    for(int i=1;i<n;i++){
        ans[i] = min(v[i], v[i-1]); 
    }
    for(auto it: ans) cout<<it<<" "; cout<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}