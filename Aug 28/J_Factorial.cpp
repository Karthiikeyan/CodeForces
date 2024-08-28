#include<bits/stdc++.h>
using namespace std;
long long ans = 1;

long long func(int n){
    if(n==1) return 1;
    return n * func(n-1);
}

void solve(){
    int n;
    cin >> n;
    cout<< func(n) <<endl;
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}