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
    int n; cin >> n;
    string str; cin >> str;

    int cnt = count(str.begin(), str.end(), '1');
    // pr(cnt);
    if(n == 2 && cnt == 2){
        prt("NO");
        return;
    }
    if(cnt == 2){
        for(int i=0; i<n-1; i++){
            if(str[i] == '1' && str[i+1] == '1'){
                prt("NO");
                return;
            }
        }
    }
    if(cnt%2 == 0) prt("YES");
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