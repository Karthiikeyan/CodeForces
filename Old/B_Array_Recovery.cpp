#include<bits/stdc++.h>
using namespace std;
vector<int> v;

bool solve(){
    int n;
    cin >> n;
    vector<int> d(n);
    for(int i=0; i<n; i++) cin >> d[i];
    bool flag = true;
    for(int i=1; i<n; i++){
        if (d[i-1]>=d[i] and d[i]!=0){
            flag=false;
            cout<<-1<<endl;
            break;
        }
        d[i] = d[i]+d[i-1];
    }
    if(flag){
        for(auto i=0; i<n; i++) cout<<d[i]<<" "; cout<<endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}