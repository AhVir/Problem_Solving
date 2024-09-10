#include<bits/stdc++.h>
using namespace std;

#define int long long 

void solve(){
    int n; cin >> n;
    vector<int> val;

    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        val.push_back(temp);
    }

    int sum = 0;
    int cnt = 0;
    int maxVal = 0;

    for(int i=0; i<n; i++){
        if(sum == val[i]){
            cnt++;
        }
        else if(i != 0){
            int tempSum = sum - val[i-1];
            tempSum += val[i];
            if(tempSum == val[i-1]){
                cnt++;
            }
            else{
                int tempSum2 = sum - maxVal;
                tempSum2 += val[i];
                if(tempSum2 == maxVal) cnt++;
            }
        }
        sum += val[i];
        maxVal = max(maxVal, val[i]);
    }

    //cout << "count: " << cnt << endl;
    cout << cnt << endl;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}