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
    vector<int> nums(n);
    int maxNumIdx = -1;
    int maxNum = 0;
    for(int i=0; i<n; i++){
        int t; cin >> t;
        nums[i] = t;
        if(t > maxNum){
            maxNumIdx = i;
            maxNum = t;
        }
    }

    int steps = maxNumIdx;
    // pr(steps);
    int temp = steps;
    while(temp > 0){
        int t = nums[temp];
        nums[temp] = nums[temp-1];
        nums[temp-1] = t;
        temp--;
    }

    //for min number
    int minNum = 105; //as constrain is ai <= 100
    int minNumIdx = -1;
    for(int i=0; i<n; i++){
        if(nums[i] <= minNum){
            minNum = nums[i];
            minNumIdx = i;
        }
    }

    steps += (n-1-minNumIdx);
    // pr(steps);

    // for(int X:nums) cout << X << " ";
    // cout << endl;

    prt(steps);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}