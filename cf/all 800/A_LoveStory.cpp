#include<bits/stdc++.h>
using namespace std;

string str = "codeforces";

void solve(){
    string st; cin >> st;
    int cnt = 0;
    
    for(int i=0; i<10; i++) if(st[i] != str[i]) cnt++;

    cout << cnt << endl;
}

int main(){
    int t; cin >> t;
    while(t--) solve();

    return 0;
}