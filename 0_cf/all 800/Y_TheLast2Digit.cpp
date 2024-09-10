#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define int long long

void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    a %= 100, b %= 100, c %= 100, d %= 100;

    int res = (a*b*c*d);
    string ans = "";
    ans.push_back((res%10)+'0');
    res/=10;
    ans.push_back((res%10)+'0');
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t = 1;
    while(t--) solve();

    return 0;
}