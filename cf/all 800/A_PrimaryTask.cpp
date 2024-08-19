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
    string num; cin >> num;
    int n = num.size();
    // pr(num[0]);
    // pr(num[1]);

    if(n == 1 || n == 2){
        prt("No");
        return;
    }

    if(num[0] != '1' || num[1] != '0'){
        prt("NO");
        return;
    }

    char firstPower = 0;
    int firstPowerIdx = -1;
    if(num[2] == '0'){
        prt("NO");
        return;
    }

    if(num[2] >= '2'){
        prt("YES");
        return;
    }
    else if(num[2] == '1' && (n-1) >= 3){
        prt("YES");
        return;
    }
    else{
        prt("NO");
        return;
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