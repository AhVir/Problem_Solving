// link: https://codeforces.com/problemset/problem/1389/A

#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define int long long
//#define int unsigned long long

void solve(){
    int l, r; cin >> l >> r;
    int x = l;
    int y = 2*l;

    if(y > r) prt("-1 -1"); 
    else cout << x << " " << y << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}