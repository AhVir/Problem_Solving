#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    int cnt = 0;
    if(b>a) cnt++;
    if(c>a) cnt++;
    if(d>a) cnt++;

    cout << cnt << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();

    return 0;
}