#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
//#define int long long
//#define int unsigned long long

vector<string> splitString(string& str, string& delimiter){
    vector<string> result;
    regex rgx(delimiter);

    sregex_token_iterator begin(str.begin(), str.end(), rgx, -1), end;

    copy_if(begin, end, back_inserter(result), [](const string& s){
        return !s.empty();
    });

    return result;
}

void solve(){
    string st; cin >> st;
    string delimiter = "WUB";

    vector<string> ans = splitString(st, delimiter);

    for(auto X:ans) cout << X << " ";
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