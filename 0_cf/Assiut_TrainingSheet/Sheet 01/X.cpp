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
    int l1, r1; cin >> l1 >> r1;
    int l2, r2; cin >> l2 >> r2;

    if(l2 <= r1 && l2 >= l1){
        if(r2 <= r1) cout << l2 << " " << r2 << endl;
        else cout << l2 << " " << r1 << endl; 
    }
    else if(l1 >= l2 && l1 <= r2){
        if(r1 <= r2) cout << l1 << " " << r1 << endl;
        else cout << l1 << " " << r2 << endl;
    }
    else prt(-1);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}