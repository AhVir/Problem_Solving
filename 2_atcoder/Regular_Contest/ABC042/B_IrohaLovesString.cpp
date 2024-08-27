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
    int n, l; cin >> n >> l;
    vector<string> strs;
    for(int i=0;i<n; i++){
        string st; cin >> st;
        strs.push_back(st);
    }

    sort(strs.begin(), strs.end());

    for(auto X:strs) cout << X;
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}