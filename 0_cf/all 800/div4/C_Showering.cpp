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
    int n, s, m; cin >> n >> s >> m;
    vector<pair<int, int>> tasks;
    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        tasks.push_back({a, b});
    }

    if(tasks[0].first-0 >= s){
        prt("YES");
        return;
    }
    else if(m - tasks[n-1].second >= s){
        prt("YES");
        return;
    } 
    else{
        for(int i=1; i<n; i++){
            if(tasks[i].first - tasks[i-1].second >= s){
                prt("YES");
                return;
            }
        }
    }

    prt("NO");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}