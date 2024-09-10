#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string num1, num2; cin >> num1 >> num2;
    vector<char> ans;

    for(int i=0; i<num1.size(); i++){
        if(num1[i] == num2[i]) ans.push_back('0');
        else ans.push_back('1');
    }

    for(char x:ans) cout << x;
    cout << endl;

    return 0;
}