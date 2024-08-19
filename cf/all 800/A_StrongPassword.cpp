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
    string str; cin >> str;
    int n = str.size();

    int firstChar = str[0]-'a';
    int insertChar = 0;
    if(firstChar >= 0 && firstChar < 25) insertChar = firstChar + 1;
    else insertChar = firstChar - 1;

    char t = 'a' + insertChar;
    // pr(t);
    // pr(insertChar);
    string ans = {t};
    for(int i=0; i<n-1; i++){
        if(str[i] == str[i+1]){
            if(str[i] < 'z') t = 'z';
            else t = 'a';
            string ans = {t};
            str.insert(i+1, ans);
            prt(str);
            return;
        }
    }
    ans += str;
    prt(ans);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}