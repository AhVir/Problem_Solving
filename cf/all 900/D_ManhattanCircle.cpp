#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define int long long
//#define int unsigned long long

void solve(){
    int n, m; cin >> n >> m;
    int minX = 1e5+10, minY =  1e5+10;
    int maxX = -5, maxY = -5;

    for(int i=1; i<=n; i++){
        string temp; cin >> temp;
        for(int j=1; j<=m; j++){
            if(temp[j-1] == '#'){
                minX = min(i, minX);
                maxX = max(i, maxX);
                minY = min(j, minY);
                maxY = max(j, maxY);
            }
        }
    }

    // pr(minX);
    // pr(maxX);
    // pr(minY);
    // pr(maxY);
    // pr((maxX+minX)/2);
    // pr((maxY+minY)/2);
    // hi;
    int midX = (maxX+minX)/2;
    int midY = (maxY+minY)/2;
    // pr(midX);
    // pr(midY);

    cout << midX << " " << midY << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}