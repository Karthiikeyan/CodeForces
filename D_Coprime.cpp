#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x % y);
}

int solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int,int> mpp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mpp[v[i]] = i + 1;
    }

    int ans = -1;

    for(auto start: mpp){
        int initial = start.first;
        for(auto end: mpp){
            int final = end.first;
            if(gcd(initial,final)==1){
                ans = max(ans, start.second + end.second);
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--) cout<<solve()<<endl;
    return 0;
}