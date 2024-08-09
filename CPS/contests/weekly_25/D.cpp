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
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }

    int m; cin >> m;
    vector<int> q;
    for(int i=0; i<m; i++){
        int temp; cin >> temp;
        q.push_back(temp);
    }

    sort(a.rbegin(), a.rend());

    int sum = accumulate(a.begin(), a.end(), 0);
    for(int i=0; i<m; i++){
        int cal = sum - a[q[i]-1];
        prt(cal);
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}