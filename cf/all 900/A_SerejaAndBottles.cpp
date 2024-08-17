#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugin freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
//#define int long long
//#define int unsigned long long

void solve(){
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0);
    vector<int> ans(n, -1);
    for(int i=0; i<n; i++){
        int x, y; cin >> x >> y;
        a[i] = x, b[i] = y;
    }

    for(int i=0; i<n; i++){
        int brandCanOpen = b[i];
        for(int j=0; j<n; j++){
            if(i == j) continue;
            if(a[j] == brandCanOpen) ans[j] = 1;
        }
    }

    int cnt = count(ans.begin(), ans.end(), -1);
    prt(cnt);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}