#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
// #define int long long
#define int unsigned long long

int Pow(int a, int b){
    int res = 1;
    while(b > 0){
        if(b%2 != 0) res = 1ll *res * a;
        a = a * a * 1ll;
        b = b >> 1;
    }

    return res;
}

void solve(){
    int n; cin >> n;
    int lastNum = 8;
    int cal = Pow(lastNum, n);
    prt(cal%10);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}