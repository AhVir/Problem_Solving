#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout << #x << " = " << x << endl

void solve(){
    int n; cin >> n;
    int oddCnt = 0, evenCnt = 0;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int t; cin >> t;
        nums.push_back(t);
        if(t%2==0) evenCnt++;
        else oddCnt++;
    }

    pr(evenCnt);
    pr(oddCnt);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}