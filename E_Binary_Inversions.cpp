#include<bits/stdc++.h>
#define int long long
using namespace std;

int solve(){
    int n;
    cin >> n;
    vector<int> v(n), zero, one;
    for(int i=0; i<n; i++) cin >> v[i];

    zero = v, one = v;
    for(int i=0; i<n; i++){
        if(zero[i]==0){
            zero[i] = 1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(one[i]==1){
            one[i] = 0;
            break;
        }
    }

    int maxInv = 0;
    int cntZeros = 0;
    for(int i=n-1;i>=0;i--){
        if(v[i]==0){
            cntZeros++;
        }else{
            maxInv += cntZeros;
        }
    }

    int maxInv1 = 0;
    cntZeros = 0;
    for(int i=n-1;i>=0;i--){
        if(zero[i]==0){
            cntZeros++;
        }else{
            maxInv1 += cntZeros;
        }
    }

    int maxInv2 = 0;
    cntZeros = 0;
    for(int i=n-1;i>=0;i--){
        if(one[i]==0){
            cntZeros++;
        }else{
            maxInv2 += cntZeros;
        }
    }
    return max(maxInv2, max(maxInv, maxInv1));
}

signed main(){
    int t;
    cin >> t;
    while(t--){cout<<solve()<<endl;}
    return 0;
}