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
    int n;  cin >> n;
    string str; cin >> str;

    int cnt = 0;
    for(int i=0; i<n; i+=2){
        if(str[i] == str[i+1]){
            cnt++;
            if(str[i] == 'a') str[i] = 'b';
            else str[i] = 'a';
        }
    }

    prt(cnt);
    prt(str);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}