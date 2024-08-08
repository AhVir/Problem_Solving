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
    int cnt = 0;    
    int sum = p1 + p2 + p3;
    while((sum) > 0){
        sort(nums.rbegin(), nums.rend());
        cnt++;
        nums[0]--;
        nums[1]--;
        sum = accumulate(nums.begin(), nums.end(), 0);
    }
    pr(cnt);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}