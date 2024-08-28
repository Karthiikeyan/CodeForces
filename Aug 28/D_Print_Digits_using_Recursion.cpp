#include<bits/stdc++.h>
using namespace std;

void func(int ind, string s){
    if(ind == s.size()-1){
        cout<<s[ind];
        return;
    }
    cout<<s[ind]<<" ";
    func(ind+1, s);
}

void solve(){
    string s;
    cin >> s;
    func(0, s);
    cout<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}