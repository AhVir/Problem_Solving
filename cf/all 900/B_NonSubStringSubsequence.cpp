#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
//#define int long long
//#define int unsigned long long

void solve(){
    int n, q; cin >> n >> q;
    string str; cin >> str;
    while(q--){
        int l, r; cin >> l >> r;
        int lChar = str[l-1], rChar = str[r-1];

        int lTrue = false, rTrue = false;
        for(int i=0; i<l-1; i++){
            if(str[i] == lChar){
                lTrue = true;
                break;
            }
        }

        for(int i=r; i<n; i++){
            if(str[i] == rChar){
                rTrue = true;
                break;
            }
        }

        if(lTrue || rTrue) prt("YES");
        else prt("NO");
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}