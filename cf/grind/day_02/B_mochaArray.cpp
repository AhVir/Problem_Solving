#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n; cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        nums.push_back(temp);
    }

    sort(nums.begin(), nums.end());
    int min1, min2;
    min1 = nums[0];

    vector<int> secNums;
    
    for(int i=1; i<n; i++){
        if(nums[i]%min1 != 0){
            secNums.push_back(nums[i]);
        }
    }

    if(!secNums.size()){
        cout << "Yes" << endl;
        return;
    }

    sort(secNums.begin(), secNums.end());
    min2 = secNums[0];

    for(int i=1; i<secNums.size(); i++){
        if(secNums[i]%min2 != 0){
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}