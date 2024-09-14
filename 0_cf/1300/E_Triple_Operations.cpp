#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
#define int long long
//#define int unsigned long long

// const int maxNum = 200009; 
const int maxNum = 200'007; 
int preSum[maxNum] = {0};



// int log3VAL(int n){
//     return (log(n)/log(3))+1;
// }

int log3VAL(int x){
    int cnt = 0;
	while (x) {
		x /= 3;
		cnt++;
	}
	return cnt;
}

void solve(){
    int l, r; cin >> l >> r;

    int logVal = log3VAL(l);
    int ans = logVal + (preSum[r] - preSum[l-1]);
    prt(ans);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // for(int i=1; i<=maxNum; i++) preSum[i] = i;
    for(int i=1; i<=maxNum; i++){
        int temp = log3VAL(i);
        preSum[i] = preSum[i-1] + temp;
    }

    // for(int i=1; i<=84; i++) cout << i << " = " << preSum[i] << endl;

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}