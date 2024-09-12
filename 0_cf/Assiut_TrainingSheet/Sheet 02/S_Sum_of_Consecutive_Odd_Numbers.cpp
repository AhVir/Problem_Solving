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
    int x, y; cin >> x >> y;
    int num1 = min(x, y), num2 = max(x, y);
    if(num1 + 1 >= num2){
        cout << 0 << endl;
        return;
    }

    int sum = 0;
    for(int i=num1+1; i < num2; i++){
        // pr(i);
        if(i%2 != 0) sum += i; 
    }
    prt(sum);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}