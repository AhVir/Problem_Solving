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
    for(int i=0; i<n; i++){
        int t; cin >> t;
        nums.push_back(t);
    }

    //if all are 0s
    int cnt0 = count(nums.begin(), nums.end(), 0);
    if(cnt0 == n){
        prt("No");
        return;
    }

    //if all are 1s
    int cnt1 = count(nums.begin(), nums.end(), 1);
    if(cnt1 == n || cnt1 > cnt0){
        prt("YES");
        return;
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