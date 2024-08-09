#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
// #define int long long
#define int unsigned long long

void solve(){
    int n, m; cin >> n >> m;
    vector<string> pictures;

    for(int i=0; i<n; i++){
        string temp = "";
        for(int j=0; j<m; j++){
            char t; cin >> t;
            temp.push_back(t);
        }
        pictures.push_back(temp);
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
    if(colCount == n && rowCount == m) prt(0);
    else{
        int neededMin = (n-colCount) + (m-rowCount);
        if(pictures[maxRowIdx][maxColIdx] != '*') neededMin--;
        prt(neededMin);
    }

}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}