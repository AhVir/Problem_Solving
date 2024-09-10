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
    int a, b, c, d; cin >> a >> b >> c >> d;
    int temp = a;
    a = min(a, b);
    b = max(temp, b);

    if((c >= a && c <= b)&&(d >= a && d <= b)) prt("NO");
    else if(c>= a && c <= b) prt("YES");
    else if(d>= a && d <= b) prt("YES");
    else prt("NO");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}