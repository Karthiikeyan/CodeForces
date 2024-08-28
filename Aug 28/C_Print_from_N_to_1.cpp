#include<bits/stdc++.h>
using namespace std;

void func(int n){
    if(n==0) return;
    cout<<n;
    if(n!=1) cout<<" ";
    func(n-1);
}

int main(){
    int t;
    cin >> t;
    func(t);
    return 0;
}