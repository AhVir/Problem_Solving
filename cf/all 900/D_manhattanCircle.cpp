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
    int n, m; cin >> n >> m;
    int minY = -1, maxY;

    for(int i=1; i<=n; i++){
        string str; cin >> str;
        for(int j=1; j<=m; j++){
            if(str[j-1] == '#'){
                if(minY == -1) minY = j;
                maxY = j;
            }
        }
    }

    pr(minY); pr(maxY); hi;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}