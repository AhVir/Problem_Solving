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
    string strS, strT, strP; cin >> strS >> strT >> strP;

    int s[26] = {0};
    int t[26] = {0};
    int p[26] = {0};
    int diff[26] = {0};

    for(int i=0; i<strS.length(); i++){
        char t = strS[i];
        s[t-'a']++;
    }
    for(int i=0; i<strT.length(); i++){
        char temp = strT[i];
        t[temp-'a']++;
    }
    for(int i=0; i<strP.length(); i++){
        char t = strP[i];
        p[t-'a']++;
    }

    for(int i=0; i<26; i++){
        diff[i] = t[i]-s[i];
    }

    prt("S:");
    for(int X:s) cout << X << " ";
    cout << endl;

    prt("T:");
    for(int X:t) cout << X << " ";
    cout << endl;

    prt("P:");
    for(int X:p) cout << X << " ";
    cout << endl;

    prt("diff:");
    for(int X:diff) cout << X << " ";
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