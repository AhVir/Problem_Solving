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

bool isLucky(int n){
    while(n > 0){
        int lastNum = n%10;
        if(lastNum != 4 && lastNum != 7) return false;
        n /= 10;
    }

    return true;
}

void solve(){
    int a, b; cin >> a >> b;
    bool flag = 0;
    for(int i=a; i<=b; i++){
        if(isLucky(i)){
            cout << i << " ";
            flag = 1;
        } 
    }

    if(!flag) prt(-1);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}