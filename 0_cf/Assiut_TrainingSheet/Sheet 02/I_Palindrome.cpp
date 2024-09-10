#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
#define int long long
//#define int unsigned long long

void solve(){
    string num; cin >> num;
    int n = num.length();
    int midIdx = n/2;

    //reversing number
    int revNum = 0;
    for(int i=n-1; i>=0; i--){
        int temp = num[i] - '0';
        revNum = (revNum*10) + temp;
    }
    prt(revNum);

    for(int i=0; i<=midIdx; i++){
        if(num[i] != num[n-1-i]){
            prt("NO");
            return;
        }
    }

    prt("YES");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}