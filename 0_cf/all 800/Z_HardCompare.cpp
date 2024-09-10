#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define pr(x) cout << #x << " = " << x << endl

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    double pow1 = b*log(a), pow2 = d*log(c);
    if(pow1>pow2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}