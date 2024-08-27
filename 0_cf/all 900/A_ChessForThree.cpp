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
    int p1, p2, p3; cin >> p1 >> p2 >> p3;
    int sum = p1 + p2 + p3;
    if(sum%2 != 0){
        prt(-1);
        return;
    }

    int cnt = p1;
    int restOfDraw = (p2+p3-p1)/2;
    cnt += (min(p2, restOfDraw));

    // pr(cnt);
    prt(cnt);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}