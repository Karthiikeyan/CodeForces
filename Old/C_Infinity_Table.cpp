#include<bits/stdc++.h>
using namespace std;

pair<int,int> solve(){
    int n;
    cin >> n;
    int row = 1, col = 1, inc = 2, num = 1, val = 1;
    while(true){
        if(n < num){
            inc-=2;
            if(num - (inc/2) <= n){
                col = val;
                int st = num - (inc/2);
                row = n - st + 1;
                break;
            }else{
                row = val - 1;
                num -= inc;
                int end = num + (inc/2) - 1;
                col = end - n + 1;
                break;
            }
        }
        num += inc;
        inc += 2;
        val++;
    }
    return {row, col};
}

int main(){
    int t;
    cin >> t;
    while(t--){
        pair<int, int> ans = solve();
        cout<<ans.first<<" "<<ans.second<<endl;
    }
    
    return 0;
}