#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
//#define int long long
//#define int unsigned long long

void solve(){
    string s1, s2; cin >> s1 >> s2;

    int idxS1 = s1.length() - 1;
    int idxS2 = s2.length() - 1;

    while(true){
        if(idxS1 == -1 || idxS2 == -1) break;
        if(s1[idxS1] != s2[idxS2]) break;

        idxS1--;
        idxS2--;
    }

    // pr(idxS1); pr(idxS2);
    prt(idxS1+idxS2+2);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}