#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int curr = INT_MAX, ind = -1;
    unordered_map<int, int> mpp;

    for(int i=n-1; i >= 0; i--){
        if(curr < v[i]){
            ind = i;
            break;
        }
        curr = v[i];
        if(mpp.find(curr) == mpp.end()) mpp[curr] = i; 
    }
    if(ind == -1) return 0;

    for(int i=0;i<=ind;i++){
        ind = max(ind, mpp[v[i]]);
    }

    unordered_set<int> st;
    for(int i=0;i<=ind;i++){
        st.insert(v[i]);
    }
    return st.size();
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}