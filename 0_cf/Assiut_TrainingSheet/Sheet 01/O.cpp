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
    string s; cin >> s;
    int n = s.length();
    int num1 = 0, num2 = 0;
    char symbol;

    int i;
    for(i=0; i<n-1; i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            symbol = s[i];
            break;
        }
        int tempNum = s[i] - '0';
        // pr(tempNum);
        // pr(s[i]);
        num1 = (num1 * 10) + tempNum;
        // pr(num1);
    }
    i++;
    for(;i<n; i++){
        int tempNum = s[i] - '0';
        // pr(tempNum);
        // pr(s[i]);
        num2 = (num2*10) + tempNum;
    }

    // pr(num1); pr(num2); pr(symbol);
    if(symbol == '+') prt(num1+num2);
    else if(symbol == '-') prt(num1-num2);
    else if(symbol == '*') prt(num1*num2);
    else prt(num1/num2);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}