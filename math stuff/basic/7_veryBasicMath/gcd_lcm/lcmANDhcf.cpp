// link: https://vjudge.net/problem/HackerRank-si-lcm-and-hcf

#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define int long long
//#define int unsigned long long

int findingGCD(int a, int b){
    if(a == 0 || a == b) return b;
    if(b == 0) return a;

    if(a > b) return findingGCD(a-b, b);
    return findingGCD(a, b-a);
}

void solve(){
    int a, b; cin >> a >> b;

    // int gcd = findingGCD(a, b);
    int gcd = __gcd(a, b);
    int lcm = (a*b)/gcd;

    cout << lcm << " " << gcd << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}