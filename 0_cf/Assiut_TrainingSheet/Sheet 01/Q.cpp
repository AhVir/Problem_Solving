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
    double x, y; cin >> x >> y;

    if(x == 0.0 && y == 0.0) prt("Origem");
    else if(x == 0.0) prt("Eixo Y");
    else if(y == 0.0) prt("Eixo X");
    else{
        if(x > 0.0 && y > 0.0) prt("Q1");
        else if(x < 0.0 && y > 0.0) prt("Q2");
        else if(x < 0.0 && y < 0.0) prt("Q3");
        else prt("Q4");
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