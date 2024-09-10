#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
//#define int long long
//#define int unsigned long long

void solve(){
    int n; cin >> n;
    int sumOfNums = 0;
    int baseNum = 1;
    int cnt = 0;
    int total = 0;

    while(total <= n){
        cnt++;
        sumOfNums += baseNum;
        baseNum++;
        total += sumOfNums;
    }
    cnt--;
    cout << cnt << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}