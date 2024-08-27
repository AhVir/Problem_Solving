#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
//#define int long long
//#define int unsigned long long

string hate = "I hate that";
string love = "I love that";
string hateLast = "I hate it";
string loveLast = "I love it";

void solve(){
    int n; cin >> n;
    string ans = "";
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            if(i != n){
                ans.append(love);
                ans.push_back(' ');
            }
            else ans.append(loveLast);
        }
        else{
            if(i != n){
                ans.append(hate);
                ans.push_back(' ');
            }
            else{
                ans.append(hateLast);
            }
        }
    }

    prt(ans);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}