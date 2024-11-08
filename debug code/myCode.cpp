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
    string str; cin >> str;

    char smallChar = '|';
    int smallCharIdx = -1;
    for(int i=1; i<n; i++){
        if(str[i] <= str[0]){
            if(str[i] < smallChar){
                smallChar = str[i];
                smallCharIdx = i;
            }
        }
    }

    // pr(smallChar);
    // pr(smallCharIdx);
    if(smallCharIdx != -1) str.erase(smallCharIdx, 1), str.insert(0, 1, smallChar);
    prt(str);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    debugIn;

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}