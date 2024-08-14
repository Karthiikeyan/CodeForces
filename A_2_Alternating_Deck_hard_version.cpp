#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int aWhite = 0, aBlack = 0;
    int bWhite = 0, bBlack = 0;
    int num = 1;
    int totNum = num;
    bool turn = true;
    while(totNum <= n){
        if(turn){
            aWhite += (num/2) + 1;
            aBlack += num/2;
        }else{
            bWhite += (num/2);
            bBlack += (num/2) + 1;
        }
        turn = !turn;
        num += 4;
        totNum += num;
    }
    totNum -= num;
    int balance = n - totNum;
    if(turn){
        aWhite += (balance/2) + (balance%2);
        aBlack += (balance/2);
    }else{
        bWhite += (balance/2);
        bBlack += (balance/2) + (balance%2);
    }
    cout<<aWhite<<" "<<aBlack<<" "<<bWhite<<" "<<bBlack<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}