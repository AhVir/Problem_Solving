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
    if(n > str.size() || n < str.size()){
        cout << "NO" << endl;
    }
    string st; cin >> st;
    if(find(st.begin(), st.end(), 'T') == st.end()){
        cout << "NO" << endl;
        return;
    }

    st.erase(find(st.begin(), st.end(), 'T')-st.begin(), 1);

    for(int i=0; i<n; i++){
        if(st[i] >= 'a' && st[i] <= 'z') ans[st[i]-'a']++;
        else{
            hi;
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