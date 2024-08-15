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
    int n; cin >> n;
    string str; cin >> str;

    vector<char> ans(n, ' ');
    int median = 0;
    int temp = 0;
    if(n%2 == 0) median = (n/2)-1, temp = n-2, ans[n-1] = str[n-1];
    else median = (n/2), temp = n-1;
    ans[median] = str[0];
    // pr(str);
    // for(char X:ans) cout << X;
    int cnt = 1, left = 1, right = 1;
    while(temp--){
        if(cnt%2 != 0){
            // pr(left);
            int idx = median - left;
            // prt("left:");
            // pr(idx);
            left++;
            ans[idx] = str[cnt];
            // for(char X:ans) cout << X;
            // cout << endl;
        }
        else{
            int idx = median + right;
            // prt("right:");
            // pr(idx);
            right++;
            ans[idx] = str[cnt];
            // for(char X:ans) cout << X;
            // cout << endl;
        }
        cnt++;
    }

    for(char X:ans) cout << X;
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}