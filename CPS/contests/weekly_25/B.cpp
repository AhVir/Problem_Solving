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
    vector<int> par(n); 
    for(int i=0; i<n; i++){
        int t; cin >> t;
        par[i] = t;
    }

    vector<int> temp = par;
    sort(temp.rbegin(), temp.rend());
    int max = temp[0];
    int secMax = temp[1];
    vector<int> ans(n, 0);
    for(int i=0; i<n; i++){
        int tempMax;
        if(par[i] == max) tempMax = secMax;
        else tempMax = max;
        ans[i] = par[i] - tempMax;
    }

    // prt("answer:");
    for(int X:ans) cout << X << " ";
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}