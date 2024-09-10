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

int preCal[21];

void solve(){
    int n; cin >> n;
    prt(preCal[n]);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    preCal[0] = 1;
    for(int i=1; i<=20; i++){
        preCal[i] = preCal[i-1] * i;
        // pr(preCal[i]);
    }

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}