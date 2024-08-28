#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int a, b, c, d;
    cin >> a >> b >> d >> c;
    int mini = min(a, min(b, min(c, d)));
    int maxi = max(a, max(b, max(c, d)));
    if((mini==a && maxi==c) || (mini==b && maxi==d)) return true;
    if((maxi==a && mini==c) || (maxi==b && mini==d)) return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        if(solve()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}