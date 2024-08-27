#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define endl "\n"
#define hi cout << "hi" << endl

void solve(){
    int n; cin >> n;
    vector<int> ans(n+1, 0);  //making 0-based indexing
    for(int i=0; i<n; i++){
        int t; cin >> t;
        ans[t] = i+1;
    }

    for(int i=1; i<=n; i++) cout << ans[i] << ' ';
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    t = 1;
    while(t--) solve();

    return 0;
}