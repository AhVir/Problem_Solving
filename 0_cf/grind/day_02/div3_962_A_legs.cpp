#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int cnt = 0;

    cnt += (n/4);
    n = n%4;
    cnt += (n/2);

    cout << cnt << endl;
}

int main(){
    //freopen("in.txt", "r", stdin);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}