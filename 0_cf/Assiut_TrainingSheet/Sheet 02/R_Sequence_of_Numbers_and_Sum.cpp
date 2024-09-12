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
    while(true){
        int n, m; cin >> n >> m;
        if(n <= 0 || m <= 0) return;
        int num1 = min(n, m), num2 = max(n, m);
        int sum = 0;
        for(int i = num1; i<=num2; i++)sum += i, cout << i << " "; 
        cout << "sum =" << sum << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}