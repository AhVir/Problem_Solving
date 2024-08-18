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
    string str; cin >> str;
    int n = str.length();
    if(str == "()"){
        prt("NO");
        return;
    }
    prt("YES");
    bool adjDiff = true;
    for(int i=0; i<n-1; i++){
        if(str[i] == str[i+1]){
            adjDiff = false;
            break;
        }
    }


    if(adjDiff){
        for(int i=1; i<=n; i++) cout << '(';
        for(int i=n+1; i<=(2*n); i++) cout << ')';
        cout << endl;
    }
    else{
        for(int i=1; i<=(2*n); i++){
            if(i%2 != 0) cout << '(';
            else cout << ')';
        }
        cout << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}