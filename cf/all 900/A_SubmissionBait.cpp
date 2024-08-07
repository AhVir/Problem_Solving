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
    int n; cin >> n;
    vector<int> nums;
    int maxNum = 0;
    for(int i=0; i<n; i++){
        int t; cin >> t;
        nums.push_back(t);
        maxNum = max(maxNum, t);
    }

    int cnt = count(nums.begin(), nums.end(), maxNum);
    // pr(cnt);
    if(cnt%2 != 0) prt("YES");
    else{
        int restOfNums = n-cnt;
        if(restOfNums%2 != 0) prt("YES");
        else prt("NO");
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