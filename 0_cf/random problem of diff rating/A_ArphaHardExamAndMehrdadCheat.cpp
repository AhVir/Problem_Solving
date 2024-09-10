#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
#define int long long
#define ll long long
// #define int unsigned long long

int power(int base, int n){
    int res = 1;
    while(n){
        if(n%2 == 0){
            base = (base*base)%10;
            n /= 2;
        }
        else{
            res = (res * base)%10;
            n--;
        }
    }

    return res;
}

void solve(){
    int n; cin >> n;
    // if(n == 0){
    //     prt(1);
    //     return;
    // }
    // int lastNum = 8;
    // int cal = Pow(lastNum, n);
    // prt(cal%10);
    int ans = power(8, n);
    // pr(ans);
    prt(ans%10);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}