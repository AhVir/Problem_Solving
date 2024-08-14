#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
//#define int long long
//#define int unsigned long long

struct DescendingCompBasedOnValue{
    bool operator()(const int& l, const int& r) const{
        return l > r;
    }
};

void solve(){
    unordered_map<string, int> mp;
    int n; cin >> n; 
    string str; cin >> str;

    for(int i=0; i<n-1; i++){
        string t = "";
        t.push_back(str[i]);
        t.push_back(str[i+1]);
        mp[t]++;
    }

    int maxOccur = 0;
    string maxGram = "";

    for(auto X:mp){
        // cout << X.first <<": " << X.second << endl;
        if(X.second > maxOccur) maxOccur = X.second, maxGram = X.first;
    }

    prt(maxGram);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}