#include <bits/stdc++.h>
#define int long long
using namespace std;

// Segrecating how many  times the prime factors
//  repeatedly occurs and sum them up all.

void solve(){
    int n;
    cin >> n;
    unordered_map<int, int> mpp;

    for(int i=2;i*i<=n;i++){
        int cnt = 0;
        while(n%i==0){
            cnt++;
            n/=i;
            if(mpp.find(cnt)!=mpp.end()){
                mpp[cnt] *= i;
            }else{
                mpp[cnt] = i;
            }
        }
    }
    if(n!=1){
        if(mpp.find(1)==mpp.end()){
            mpp[1] = n;
        }else{
            mpp[1] *= n;
        }
    }

    int ans = 0;
    for(auto it: mpp){
        ans += it.second;
    }
    cout<<ans<<endl;

}

signed main()
{
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}