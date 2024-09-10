#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n; cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int t; cin >> t;
        nums.push_back(t);
    }
    
    int ops = 0;
    for(int i=n-2; i>=0; i--){
        if(nums[i] > nums[i+1]){
            int parts = nums[i]/nums[i+1];
            if(nums[i]%nums[i+1] != 0) parts++;
            nums[i] = nums[i]/parts;
            ops += (parts-1);
        }
    }

    cout << ops << endl;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}