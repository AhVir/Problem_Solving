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
    if(n%2 != 0){
         int median = (n/2), temp = n-1;
        ans[median] = str[0];
        int cnt = 1, left = 1, right = 1;
        while(temp--){
            if(cnt%2 != 0){
                int idx = median - left;
                left++;
                ans[idx] = str[cnt];
            }
            else{
                int idx = median + right;
                right++;
                ans[idx] = str[cnt];
            }
            cnt++;
        }

        for(char X:ans) cout << X;
        cout << endl;
    }
    else{
        int median = (n/2) - 1;
        ans[median] = str[0];
        int cnt = 1, left = 1, right = 1;
        int temp = n-1;
        while(temp--){
            if(cnt%2 == 0){
                int idx = median - left;
                left++;
                ans[idx] = str[cnt];
            }
            else{
                int idx = median + right;
                right++;
                ans[idx] = str[cnt];
            }
            cnt++;
        }

        for(char X:ans) cout << X;
        cout << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}