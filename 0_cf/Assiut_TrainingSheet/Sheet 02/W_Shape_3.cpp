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

    // first half
    for(int i=1; i<=n; i++){
        int blankSpaces = n-i;
        for(int j=1; j<=blankSpaces; j++) cout << " ";

        int stars = i*2 - 1;
        for(int j=1; j<=stars; j++) cout << "*";
        cout << endl;
    }

    // second half
    for(int i=n; i>=1; i--){
        int blankSpaces = n - i;
        for(int j=1; j<=blankSpaces; j++) cout << " ";
        int stars = i*2 - 1;
        for(int j=1; j<=stars; j++) cout << "*";
        cout << endl;
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