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
    int x, y; cin >> x >> y;

    if(x < y){
        int diff = y-x;
        if(diff <= 2) prt("Yes"); 
        else prt("No");
    }
    else{
        int diff = x-y;
        if(diff <= 3) prt("Yes");
        else prt("No");
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}