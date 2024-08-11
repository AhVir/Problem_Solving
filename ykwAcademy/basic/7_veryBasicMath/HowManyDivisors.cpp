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
    int a, b, c; cin >> a >> b >> c;
    int cnt = 0;
    if(b > c) b = c;
    for(int i=a; i<=b; i++){
        if(c%i == 0){
            // pr(i);
            // pr(c/i);
            cnt++;
            // if(i != (c/i) && (c/i) <= b) cnt++;
        }
    }
    prt(cnt);
}

void solve2(){
    int a, b, c; cin >> a >> b >> c;
    int cnt = 0;
    for(int i=a; i<=c; i++){
        if(i>b){
            prt(cnt);
            return;
        }
        if(c%i == 0 && i<=b){
            cnt++;
        }
    }

    prt(cnt);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve2();

    return 0;
}