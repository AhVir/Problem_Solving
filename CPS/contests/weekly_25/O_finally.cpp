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
    int n, m; cin >> n >> m;
    vector<string> pics(n);

    for(int i=0; i<n; i++){
        string t; cin >> t;
        pics[i] = t;
    }

    // prt("print: ");
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++) cout << pics[i][j];
    //     cout << endl;
    // }

    //counting rows
    vector<int> rowCnt(n, 0);
    vector<int> colCnt(m, 0);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(pics[i][j] == '.') rowCnt[i]++, colCnt[j]++;
        }
    }

    //counting cols
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         if(pics[i][j] == '.') colCnt[i]++;
    //     }
    // }

    // prt("rows:");
    // for(int i=0; i<n; i++) cout << rowCnt[i] << " ";
    // cout << endl;

    // prt("col:");
    // for(int i=0; i<m; i++) cout << colCnt[i] << " ";
    // cout << endl;

    int ans = n+m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int temp = rowCnt[i]+colCnt[j];
            if(pics[i][j] == '.') temp--;
            ans = min(ans, temp);
        }
    }

    prt(ans);
}

int32_t main(){
    // freopen("out.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}