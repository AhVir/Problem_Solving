#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
//#define int long long
//#define int unsigned long long

void solve(){
    int a1, a2, b1, b2; cin >> a1 >> a2 >> b1 >> b2;
    vector<pair<int, int>> p;
    p.push_back({a1, b1});
    p.push_back({a2, b2});
    p.push_back({a1, b2});
    p.push_back({a2, b1});

    int round = 0;
    if((a1 > b1 && a2 > b2)|| ((a1>b1) && (a2 == b2)) ||
        ())
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}