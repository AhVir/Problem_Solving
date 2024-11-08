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
    int n, k; cin >> n >> k;

    if(n == 1){
        prt(0);
        return;
    }
    // int ops = 1; //the cost of dividing n in at-most k pieces
    if(n <= k){
        prt(1);
        return;
    }
    int ops = 0;
    while(n > 1){
        n -= (k*(k-1));
        ops+=k;
        pr(n);
        pr(k*(k-1));
    }

    pr(ops);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}