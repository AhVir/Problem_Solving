// link: https://codeforces.com/problemset/problem/1389/A

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
    int n; cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int t; cin >> t;
        nums.push_back(t);
    }

    int gcd = 1;
    int storedGcd = nums[0];
    for(int i=1; i<n; i++){
        gcd = __gcd(storedGcd, nums[i]);
        storedGcd = gcd;
        // cout << i << ": " << gcd << endl;
    }
    if(n == 1) gcd = nums[0];
    // pr(gcd);
    int cnt = 0;
    for(int i=1; i*i <= gcd; i++){
        if(gcd%i == 0){
            cnt++;
            int otherNum = gcd/i;
            if(i != otherNum) cnt++;
        }
    }

    prt(cnt);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}