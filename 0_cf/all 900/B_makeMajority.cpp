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
    string nums; cin >> nums;

    for(int i=0; i<n-1; i++){
        if(nums[i] == '0' && nums[i+1] != '1') nums[i] = '_';
    }

    // pr(nums);
    int cnt0 = 0, cnt1 = 0;
    for(int i=0; i<n; i++){
        if(nums[i] == '0') cnt0++;
        else if(nums[i] == '1') cnt1++;
    }

    if(cnt1>cnt0) prt("Yes");
    else prt("NO");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}