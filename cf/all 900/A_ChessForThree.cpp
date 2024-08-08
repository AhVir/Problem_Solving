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
    int p1, p2, p3; cin >> p1 >> p2 >> p3;

    //if all of them are 0
    if((p1+p2+p3) == 0){
        prt(0);
        return;
    }

    //if more than 2 odd numbers
    if((p1+p2+p3)%2 != 0){
        prt(-1);
        return;
    }

    vector<int> nums = {p1, p2, p3};
    sort(nums.rbegin(), nums.rend());
    // for(int X:nums) cout << X << " ";
    // cout << endl;
    int drawCnt = nums[2];
    nums[0] -= nums[2];
    nums[1] -= nums[2];
    sort(nums.rbegin(), nums.rend());
    drawCnt += (nums[1]);
    
    pr(drawCnt);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}