#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
//#define int long long
//#define int unsigned long long

bool isDiv(int num, int k, int l, int m, int n){
    if(num%k == 0 || num%l == 0
    || num%m == 0 || num%n == 0) return true;
    else return false;
}

void solve(){
    int k, l, m, n, d; cin >> k >> l >> m >> n >> d;

    if(k == 1 || l == 1 ||
       m == 1 || n == 1){
        prt(d);
        return;
    }

    vector<int> ans(d+1, 0);
    for(int i=1; i<=d; i++) if(isDiv(i, k, l, m, n)) ans[i] = 1;

    int injuredDragon = 0;
    for(int i=1; i<=d; i++) if(ans[i] == 1) injuredDragon++;

    prt(injuredDragon);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}