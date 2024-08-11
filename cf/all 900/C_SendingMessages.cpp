#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define int long long
//#define int unsigned long long

void solve(){
    int n, f, a, b; cin >> n >> f >> a >> b;
    vector<int> moments(n);
    for(int i=0; i<n; i++){
        int t; cin >> t;
        moments[i] = t;
    }

    int curPosition = 0;
    for(int i=0; i<n; i++){
        int keepingPhoneOn = (moments[i]-curPosition)*a;
        int cost = min(keepingPhoneOn, b);
        f -= cost;
        // pr(keepingPhoneOn);
        // pr(cost);
        // pr(i);
        // pr(f);
        curPosition = moments[i];
        if(f <= 0){
            prt("NO");
            return;
        }
    }

    prt("YES");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}