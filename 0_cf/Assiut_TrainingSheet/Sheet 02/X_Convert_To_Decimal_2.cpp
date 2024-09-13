#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
#define int long long
//#define int unsigned long long

void solve(){
    int n; cin >> n;
    vector<int> ones;

    while(n > 0){
        if(n & 1 == 1) ones.push_back(1);
        n >>= 1;
    }

    int sum = 0, multipleNum = 1;
    for(int x:ones){
        sum += multipleNum;
        multipleNum *= 2;
    }

    prt(sum);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}