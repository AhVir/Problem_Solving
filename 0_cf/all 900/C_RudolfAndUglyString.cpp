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
    int n; cin >> n;
    string str; cin >> str;

    int cnt = 0;
    for(int i=0; i<n-2; i++){
        if(str[i] == 'm' && str[i+1] == 'a' && str[i+2] == 'p'){
            cnt++;
            i = i+2;
            continue;
        }
        if(str[i] == 'p' && str[i+1] == 'i' && str[i+2] == 'e'){
            cnt++;
            i = i+2;
        }
    }

    prt(cnt);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}