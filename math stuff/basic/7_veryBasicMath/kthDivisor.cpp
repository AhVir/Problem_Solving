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
    int n, k; cin >> n >> k;
    vector<int> nums;
    
    for(int i=1; i*i <=n; i++){
        if(n%i == 0){
            nums.push_back(i);
            int otherNum = n/i;
            if(otherNum != i) nums.push_back(otherNum);
        }
    }

    if(k-1 >= nums.size()){
        prt(-1);
        return;
    }
    sort(nums.begin(), nums.end());

    // pr(nums.size());
    prt(nums[k-1]);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}