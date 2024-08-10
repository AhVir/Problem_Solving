#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define int long long
// #define int unsigned long long

int validSoln() {
	int n, m;
	cin >> n >> m;
	vector<string> s(n);
	forn(i, n)
		cin >> s[i];
	vector<int> cntn(n), cntm(m);
	forn(i, n) forn(j, m){
		cntn[i] += (s[i][j] == '.');
		cntm[j] += (s[i][j] == '.');
	}
	int ans = n + m;
	forn(i, n) forn(j, m){
		ans = min(ans, cntn[i] + cntm[j] - (s[i][j] == '.'));
	}
    pr(ans);

    return ans;
}


const int sz = 5e4+123;
int rows[sz], cols[sz];
string pictures[sz];

int solve(){
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
    pr(neededMin);
    return neededMin;
}

int32_t main(){
    srand(time(NULL));

    int q = rand() % 10;
    while(q--){
        int n = rand() % 10 + 1;
        int m = rand() % 10 + 1;

        for(int i=0; i<n; i++){
            pictures[i] = "";
        }

        for(int i=0; i<n; i++){
            string temp = "";
            for(int j=0; j<m; j++){
                int temp = rand()%10;
                if(temp%2 == 0) temp.pu
            }
        }
    }
    return 0;
}