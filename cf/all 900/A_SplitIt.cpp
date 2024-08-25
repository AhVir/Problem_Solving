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
    int n, k; cin >> n >> k;
    string str; cin >> str;

    int cnt = 0;
    int  mid  = 0;
    if(n%2 == 0){
        mid = n/2 - 1;
    }
    else{
        mid = n/2;
    }

    for(int i=0; i<mid; i++){
        if(str[i] == str[n-1-i]) cnt++;
        else break;
    }

    // pr(cnt);
    if(cnt >= k) prt("YES");
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