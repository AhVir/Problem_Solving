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
    string a, b, c; cin >> a >> b >> c;

    for(int i=0; i<n; i++){
        if(a[i] != c[i] && b[i] != c[i]){
            // pr(a[i]);
            // pr(b[i]);
            // pr(c[i]);
            prt("YES");
            return;
        }
    }

    prt("NO");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}