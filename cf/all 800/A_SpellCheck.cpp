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
    if(n != str.size()){
        // cout << "length" << endl;
        cout << "NO" << endl;
        return;
    }
    auto it = find(st.begin(), st.end(), 'T');
    if(it == st.end()){
        // cout << "no T" << endl;
        cout << "NO" << endl;
        return;
    }

    // pr(it-st.begin());
    st.erase(it-st.begin(), 1);
    // pr(st);

    //making the ans[], zero if they're not
    for(int i=0; i<26; i++) ans[i] = 0;

    for(int i=0; i<st.size(); i++){
        if(st[i] >= 'a' && st[i] <= 'z'){
            ans[st[i]-'a']++;
        }
        else{
            // cout << "Another Cap" << endl;
            cout << "NO" << endl;
            return;
        }
    }

    for(int i=0; i<26; i++){
        if(mat[i] != ans[i]){
            // cout << "didn't match" << endl;
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
    // int t = 1;
    while(t--) solve();

    return 0;
}