#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define endl "\n"
#define hi cout << "hi" << endl

int mat[26] = {0};
string str = "Timur";
int ans[26] = {0};

void solve(){
    int n; cin >> n;
    string st; cin >> st;
    hi;
    if(n > str.size() || n < str.size()){
        cout << "NO" << endl;
        return;
    }
    if(find(st.begin(), st.end(), 'T') == st.end()){
        cout << "NO" << endl;
        return;
    }
    int idx = find(st.begin(), st.end(), 'T')-st.begin();
    //pr(idx);
    st.erase(idx, 1);

    for(int i=0; i<st.size(); i++){
        if(st[i] >= 'a' && st[i] <= 'z') ans[st[i]-'a']++;
        else{
            cout << "NO" << endl;
            return;
        }
    }

    for(int i=0; i<26; i++){
        if(ans[i] != mat[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=1; i<str.size(); i++) mat[str[i]-'a']++;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}