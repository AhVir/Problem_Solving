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
    string st; cin >> st;

    int mat[26] = {0};
    // for(int X:mat) cout << X << " ";
    // cout << endl;
    for(int i=0; i<st.length(); i++){
        char t = tolower(st[i]);
        // pr(t);
        // pr(mat[t-'a']);
        mat[t-'a']++;
    }

    // for(int X:mat) cout << X << " ";
    // cout << endl;

    for(int i=0; i<26; i++){
        if(mat[i] == 0){
            prt("NO");
            return;
        }
    }

    prt("YES");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}