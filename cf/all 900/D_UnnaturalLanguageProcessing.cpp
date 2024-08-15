#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
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
    string ans = "";

    for(int i=0; i<n;){
        //the forth idx from i
        int idx = i+3;
        if(idx >= n){  //for the last syllable
            // pr(str[i]);
            for(int j=i; j<n; j++){
                ans.push_back(str[j]);
            }
            prt(ans);
            return;
        }

        //if idx is vowel
        if(str[idx] == 'a' || str[idx] == 'e'){
            ans.push_back(str[i]);
            ans.push_back(str[i+1]);
            ans.push_back('.');
            i = i+2;
        }
        //if idx is not vowel
        else{
            ans.push_back(str[i]);
            ans.push_back(str[i+1]);
            ans.push_back(str[i+2]);
            ans.push_back('.');
            i = i+3;
        }
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