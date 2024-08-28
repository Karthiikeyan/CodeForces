#include<bits/stdc++.h>
using namespace std;

void solve(){
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c)), b(r, vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cin >> a[i][j];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cin >> b[i][j];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j] + b[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}