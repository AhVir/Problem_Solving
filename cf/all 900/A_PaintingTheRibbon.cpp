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
    int n, m, k; cin >> n >> m >> k;
    int kNeeded = n/m;
    if(n%m != 0) kNeeded++;
    kNeeded = n-kNeeded;
    // pr(kNeeded);
    // pr(k);
    if(k >= kNeeded) prt("NO");
    else prt("YES");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}