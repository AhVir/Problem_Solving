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
    string number; cin >> number;
    if(n == 11 && number[0] != '8'){
        prt("NO");
        return;
    }

    int first8 = -1;
    for(int i=0; i<n; i++){
        if(number[i] == '8'){
            first8 = i;
            break;
        }
    }
    // pr(first8);
    if(first8 == -1){
        prt("NO");
        return;
    }

    if(n-first8 >= 11) prt("YES");
    else prt("NO");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}