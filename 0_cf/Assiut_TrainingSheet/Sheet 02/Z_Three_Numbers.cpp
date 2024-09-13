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

// void solve(){  // correct solution
//     int k, s; cin >> k >> s;

//     int cnt = 0;
//     for(int x=0; x<=k; x++){
//         for(int y=0; y<=k; y++){
//             int z = s-x-y;
//             if(z >= 0 &&  z <= k) cnt++;
//         }
//     }
//     prt(cnt);
// }

void solve(){ // trying another approach
    int k, s; cin >> k >> s;
 
    int cnt = 0;
    for(int x=0; x<=k; x++){
        // hi;
        if((s-x) >= 0){
            for(int y=0; y<=k; y++){
                // cout << "X: " << x << ", Y: " << y << "Z: " << s-x-y << endl;
                if(s-x-y <= k && s-x-y >= 0) cnt++;
            }
        }
    }
    prt(cnt);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}