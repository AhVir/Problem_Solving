#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define int long long
// #define int unsigned long long

void solve(){
    int n, m; cin >> n >> m;
    vector<string> pictures;

    for(int i=0; i<n; i++){
        string temp; cin >> temp;
        pictures.push_back(temp);
    }
    // prt("Printing: ");
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++) cout << pictures[i][j];
    //     cout << endl;
    // }

    //finding maxRow count:
    vector<int> rows(n, 0);
    for(int i=0; i<n; i++){
        int tempCnt = 0;
        for(int j=0; j<m; j++){
            if(pictures[i][j] == '.') rows[i]++;
        }
    }

    vector<int> cols(m, 0);
    for(int i=0; i<m; i++){
        int tempCnt = 0;
        for(int j=0; j<n; j++){
            if(pictures[j][i] == '.') cols[i]++;
        }
    }
    int minPaint = 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

        }
    }
    prt(neededMin);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}