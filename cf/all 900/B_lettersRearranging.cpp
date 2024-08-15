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
    string str; cin >> str;
    int n = str.length();

    //if only one char
    if(n == 1){
        prt(str);
        return;
    }

    bool containsOneChar = str.find_first_not_of(str[0]) == string::npos;
    if(containsOneChar){
        prt(-1);
        return;
    }


    //check if palindrome
    int l = 0, r = n-1;
    while(l<r)

    int median = 0;
    (n%2 == 0) ? (median = (n/2)-1):(median = (n/2));
    char temp = str[median];
    str[median] = str[median+1];
    str[median+1] = temp;
    prt(str);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}