// link: https://codeforces.com/contest/1398/problem/C

#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout << #x << " = " << x << endl
#define endl "\n"
#define int long long

void solve(){
    int n; cin >> n;
    vector<int> sums;
    sums.push_back(0);
    string s; cin >> s;
    int total = 0;
    for(int i=0; i<n; i++){
        int t = s[i] - '0';
        total += t;
        sums.push_back(total);
    }
    //cout << "before subtraction: " << endl;
    //for(int i=0; i<sums.size(); i++) cout << sums[i] << " ";
    //cout << endl;

    for(int i=1; i<sums.size(); i++) sums[i] -= i;

    //cout << "After: " << endl;
    //for(int i=0; i<sums.size();i++) cout << sums[i] << " ";
    //cout << endl;

    map<int, int> mp;
    for(int i=0; i<sums.size(); i++) mp[sums[i]]++;

    int cnt = 0;
    for(auto it:mp){
        int val = it.second;
        cnt += ((val * (val-1))/2);
    }

    cout << cnt << endl;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int t; cin >> t;
    while(t--) solve();

    return 0;
}