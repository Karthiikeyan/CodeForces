#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, sum = 0, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        sum += x;
    }
    cout<<sum<<endl;
}

signed main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}