#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    int i = n-1, j = m-1;
    while(i!=-1 && j!=-1){
        if(s[i]!=t[j]) break;
        i--, j--;
    }
    cout<<i + j + 2<<endl;
}