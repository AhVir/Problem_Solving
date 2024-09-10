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

void solve(){
    int n; cin >> n;
    vector<bool> isPrime(1009, true);
    isPrime[1] = false;
    for(int i=2; i<=n; i++){
        if(isPrime[i] == true){
            int baseNum = i, tempNum = i*2;
            // cout << i << "-> " << isPrime[i] << endl;
            // cout << "prime: " << isPrime[tempNum] << ", limit: " << tempNum << endl;
            while(tempNum <= n){
                // cout << "while loop starts: " << endl;
                // cout << tempNum << endl;
                isPrime[tempNum] = false;
                tempNum += baseNum;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(isPrime[i]) cout << i << " ";
    }
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}