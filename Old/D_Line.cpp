#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, left, right;
    cin >> n;
    string s;
    cin >> s;
    vector<int> diff(n);
    int initial = 0;

    for(int i=0;i<n;i++){
        left = i;
        right = n - i - 1;
        if(s[i]=='L'){
            diff[i] = right - left;
            initial += left;
        }else{
            diff[i] = left - right;
            initial += right;
        }
    }
    sort(diff.begin(), diff.end(), greater<int>());
    
    for(int i=0;i<n;i++){
        if(diff[i] > 0) initial += diff[i];
        cout<<initial<<" ";
    }
    cout<<endl;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}