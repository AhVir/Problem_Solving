#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout << #x << " = " << x << endl
#define int long long
#define endl "\n"

void solve(){
    int n; cin >> n;
    int oddCnt = 0, evenCnt = 0;
    int maxOdd = 0;
    int maxOddIdx = -1;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int t; cin >> t;
        nums.push_back(t);
        if(t%2==0) evenCnt++;
        else{
            oddCnt++;
            if(t > maxOdd){
                maxOdd = t;
                maxOddIdx = i;
            }
        }
    }

    if(oddCnt == 0 || evenCnt == 0){
        cout << 0 << endl;
        return;
    }
    sort(nums.begin(), nums.end()); 
    int cnt = evenCnt;

    for(int i=0; i<n; i++){
        int num = nums[i];

        if(num%2 == 0){
            if(num > maxOdd){
                maxOdd += num;
                cnt++;
            }
            else maxOdd = max(maxOdd, num+maxOdd);
        }
    }

    cout << cnt << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}