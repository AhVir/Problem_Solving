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
    double a, b; cin >> a >> b;

    // pr(floor(a/b));
    cout << "floor " << a << " / " << b << " = " << floor(a/b) << endl;
    // pr(ceil(a/b));
    cout << "ceil " << a << " / " << b << " = " << ceil(a/b) << endl;
    // pr(round(a/b));
    cout << "round " << a << " / " << b << " = " << round(a/b) << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}