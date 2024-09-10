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
    int num1, num2, res;
    char sign, useless;
    cin >> num1 >> sign >> num2 >> useless >> res;

    int cal;
    if(sign == '+') cal = num1+num2;
    else if(sign == '-') cal = num1-num2;
    else cal = num1 * num2;

    if(cal == res) prt("Yes");
    else prt(cal);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}