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
// #define int unsigned long long

void solve(){
    int cal = 1;
    int i = 4;
    while(i--){
        int temp; cin >> temp;
        temp = temp%100;
        cal *= temp;
    }
    // pr(cal);
    int lastFirst = cal%10; 
    cal /= 10;
    int lastSec = cal%10;
    cout << lastSec << lastFirst << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}