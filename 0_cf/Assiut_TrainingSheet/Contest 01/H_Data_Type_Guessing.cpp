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
    long double a, k, n; cin >> n >> k >> a;
    long double cal = (n*k)/a;
    // pr(cal);

    long double diff = cal - (long long)(cal);
    if(diff != 0.0) prt("double");
    else{
        int temp = (int)(cal);
        // pr(temp);
        if(temp >= -2147483648 && temp <= 2147483647) prt("int");
        else prt("long long");
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