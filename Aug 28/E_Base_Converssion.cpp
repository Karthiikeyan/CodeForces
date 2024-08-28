#include<bits/stdc++.h>
using namespace std;

void func(int n){
    if(n<=1){
        cout<<n%2;
        return;
    }
    func(n/2);
    cout<<n%2;
}

void solve(){
    int n;
    cin >> n;
    func(n);    
    cout<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}