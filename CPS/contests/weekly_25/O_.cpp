#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
// #define int long long
#define int unsigned long long

const int sz = 5e4+123;
int rows[sz], cols[sz];
string pictures[sz];

void solve(){
    int n, m; cin >> n >> m;
    //resetting matrix numbers
    memset(rows, 0, sizeof(rows));
    memset(cols, 0, sizeof(cols));

    for(int i=0; i<n; i++){
        cin >> pictures[i];
    }
    // prt("Printing: ");
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++) cout << pictures[i][j];
    //     cout << endl;
    // }

    //finding maxRow count:
    int rowCount = 0;
    int maxRowIdx = 0;
    for(int i=0; i<n; i++){
        int tempCnt = 0;
        for(int j=0; j<m; j++){
            if(pictures[i][j] == '*') tempCnt++;
        }
        if(tempCnt > rowCount){
            rowCount = tempCnt;
            maxRowIdx = i;
        }
    }

    int colCount = 0;
    int maxColIdx = 0;
    for(int i=0; i<m; i++){
        int tempCnt = 0;
        for(int j=0; j<n; j++){
            if(pictures[j][i] == '*') tempCnt++;
        }
        if(tempCnt > colCount){
            colCount = tempCnt;
            maxColIdx = i;
        }
    }
    int neededMin = (n-colCount) + (m-rowCount);
    if(pictures[maxRowIdx][maxColIdx] != '*') neededMin--;
    prt(neededMin);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}