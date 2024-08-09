#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define int long long
//#define int unsigned long long

void solve(){
    int n; cin >> n;
    vector<int> nums(2*n, 0);
    for(int i=0; i<(2*n); i++){
        int t; cin >> t;
        nums[i] = t;
    }

    sort(nums.begin(), nums.end());
    // prt("Array: ");
    // for(int X:nums) cout << X  << " ";
    // cout << endl;

    int halfSum = 0, restHalf = 0;
    for(int i=0; i<n; i++) halfSum += nums[i];
    for(int i=n; i<(2*n); i++) restHalf += nums[i];

    // pr(halfSum);
    // pr(restHalf);

    if(halfSum == restHalf) prt(-1);
    else{
        for(int X:nums) cout << X  << " ";
        cout << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}