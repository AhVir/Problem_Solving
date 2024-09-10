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

void solve(){
    int n, m, k; cin >> n >> m >> k;
    int totalK = 0;
    if(n == 0 || k == 0){
        prt(totalK);
        return;
    }
    int minNum = min(n, min(m, k));
    // pr(minNum);
    // considering the 3rd combination
    totalK += minNum;
    n -= minNum, m -= minNum, k -= minNum;
    // pr(n); pr(m); pr(k);
    if(n != 0 && k != 0){
        int temp = k*2;
        // pr(temp);
        if(temp <= n){
            totalK += k;
        }
        else{
            // pr(n/2);
            totalK += (n/2);
        }
    }
    prt(totalK);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}