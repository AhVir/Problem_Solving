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
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        int t; cin >> t;
        nums[i] = t;
    }

    sort(nums.begin(), nums.end());
    int cnt = 0;
    int currentProblemCnt = 1;
    for(int i=0; i<n; i++){
        if(nums[i] >= currentProblemCnt){
            cnt++;
            currentProblemCnt++;
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