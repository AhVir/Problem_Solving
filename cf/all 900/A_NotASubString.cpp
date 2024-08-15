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
    stack<char> st;
    bool isValid = true;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '(') st.push('(');
        else{
            if(st.empty()){
                isValid = false;
                break;
            }
            if(!st.empty() && st.top() == '(') st.pop();
            else{
                isValid = false;
                break;
            }
        }
    }
    if(!st.empty()) isValid = false;

    pr(isValid);

    //if the given parenthesis string is valid
    if(isValid){
        prt("NO");
        return;
    }

    //if not valid(constructing the ans string);
    
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}