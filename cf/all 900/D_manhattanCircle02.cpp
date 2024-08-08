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
    int minX = -1, maxX;
    int minY = -1;

    for(int i=1; i<=n; i++){
        string str; cin >> str;
        for(int j=1; j<=m; j++){
            if(str[j-1] == '#'){
                if(minX == -1) minX = i;
                if(minY == -1) minY = j;
                maxX = i;
            }
        }
    }

    // pr(minX); pr(maxX); pr(minY); hi;
    cout << (minX+maxX)/2 << " " << minY << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}