#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
//#define int long long
//#define int unsigned long long

void solve(){
    int n; cin >> n;
    vector<int> fibs(n+1, 0);
    fibs[1] = 0, fibs[2] = 1;

    for(int i=3; i<=n; i++){
        fibs[i] = fibs[i-1] + fibs[i-2];
    }

    for(int i=1; i<=n; i++) cout << fibs[i] << " ";
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}