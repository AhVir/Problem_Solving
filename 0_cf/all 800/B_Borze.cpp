#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string st; cin >> st;
    vector<char>ans;

    for(int i=0; i<st.size(); i++){
        char t = st[i];
        if(t == '.') ans.push_back('0');
        else if(t == '-'){
            if(st[i+1] == '.') ans.push_back('1');
            else if(st[i+1] == '-') ans.push_back('2');

            st[i+1] = '_';
        }
    }

    for(char X:ans) cout << X;
    cout << endl;

    return 0;
}