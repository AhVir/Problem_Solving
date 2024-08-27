#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
//#define int long long
//#define int unsigned long long

void solve(){
    int n; cin >> n;
    vector<int> nums(n);
    int nonZeroIdxFirst = 100009, nonZeroIdxSec = -1;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        nums[i] = temp;
        if(temp != 0){
            nonZeroIdxFirst = min(i, nonZeroIdxFirst);
            nonZeroIdxSec = max(i, nonZeroIdxSec);
        }
    }
    if(nonZeroIdxFirst == 100009){
        prt(0);
        return;
    }
    for(int i=nonZeroIdxFirst; i<=nonZeroIdxSec; i++){
        if(nums[i] == 0){
            prt(2);
            return;
        }
    }
    prt(1);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}