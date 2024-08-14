#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, temp;
    cin >> n;
    temp = n;
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
        return;
    }
    vector<int> v;
    while(temp){
        v.push_back(temp%10);
        temp /= 10;
    }
    reverse(v.begin(), v.end());

    bool flag = false;
    string s1 = "", s2 = "";
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            s1 += to_string(v[i]/2);
            s2 += to_string(v[i]/2);
        }else if(flag){
            s1 += to_string(v[i]/2);
            s2 += to_string(v[i]/2 + 1);
            flag = !flag;
        }else{
            s1 += to_string(v[i]/2 + 1);
            s2 += to_string(v[i]/2);
            flag = !flag;
        }
    }
    cout<<stoi(s1)<<" "<<stoi(s2)<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

