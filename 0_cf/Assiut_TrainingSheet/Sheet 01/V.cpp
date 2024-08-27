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
    int num1; cin >> num1;
    char sign; cin >> sign;
    int num2; cin >> num2;

    // pr(num1); pr(num2);pr(sign);
    if(num1 > num2 && sign == '>') prt("Right");
    else if(num1 == num2 && sign == '=') prt("Right");
    else if(num1 < num2 && sign == '<') prt("Right");
    else prt("Wrong");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}