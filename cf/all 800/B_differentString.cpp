#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
//#define int long long
//#define int unsigned long long

void solve(){
    string str; cin >> str;
    int n = str.size();

    int secondDiffCharIdx = -1;
    bool isAllSame = true;

    for(int i=1; i<n; i++){
        if(str[i] != str[0]){
            isAllSame = false;
            secondDiffCharIdx = i;
            break;
        }
    }
    if(isAllSame){
        prt("NO");
        return;
    }
    prt("YES");
    char temp = str[0];
    str[0] = str[secondDiffCharIdx];
    str[secondDiffCharIdx] = temp;
    prt(str);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}