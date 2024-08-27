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
    int n, k; cin >> n >> k;
    string str; cin >> str;
    vector<int> occurrence(26, 0);

    for(int i=0; i<n; i++){
        // pr(str[i]);
        int temp = str[i] - 'A';
        // pr(temp);
        occurrence[temp]++;
    }

    // for(int i=0; i<26; i++) cout << occurrence[i] << " ";
    // cout << endl;

    int minVal = 100009;
    for(int i=0; i<k; i++){
        // if(occurrence[i])
        minVal = min(occurrence[i], minVal);
    }
    int ans = minVal * k;
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