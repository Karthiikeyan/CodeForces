#include<bits/stdc++.h>
using namespace std;

int func(int ind, string s){
    if(ind==s.size()) return 0;
    if(s[ind]=='A' || s[ind]=='E' || s[ind]=='I' || s[ind]=='O' || s[ind]=='U' || s[ind]=='a' || s[ind]=='e' || s[ind]=='i' || s[ind]=='o' || s[ind]=='u' || s[ind]=='u')
        return 1 + func(ind+1, s);
    else
        return 0 + func(ind+1, s);
}

void solve(){
    string s;
    getline(cin, s);
    cout<<func(0, s)<<endl;
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}