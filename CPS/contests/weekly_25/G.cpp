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
    if(str.length()%2 != 0){
        int idx = str.length()-1;
        // pr(str[idx]);
        str.erase(idx, 1);
        cnt++;
    }
    for(int i=0; i<str.length()-1; i++){
        if(i%2 == 0 && str[i] == str[i+1]){
            str.erase(i+1, 1);
            cnt++;
        }
    }
    if(str.length()%2 != 0){
        int idx = str.length()-1;
        // pr(str[idx]);
        str.erase(idx, 1);
        cnt++;
    }

    prt(cnt);
    prt(str);
    // pr(cnt);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}