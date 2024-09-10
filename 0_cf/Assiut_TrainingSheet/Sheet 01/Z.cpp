#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
#define int long long
//#define int unsigned long long

void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    double ab = b * log(a), cd = d * log(c);

    // pr(ab); pr(cd);
    if(ab > cd) prt("YES");
    else prt("NO");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}