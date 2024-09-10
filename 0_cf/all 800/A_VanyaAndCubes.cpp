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
    int num = 0;
    int cnt = 0;
    int total = 0;

    while(total <= n){
        num++;
        sumOfNums += num;
        total += sumOfNums;
        cnt++;
        // pr(num);
        // pr(sumOfNums);
        // pr(total);
    }

    // pr(cnt);
    cout << --cnt << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}