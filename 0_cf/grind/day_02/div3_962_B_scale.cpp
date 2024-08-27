#include<bits/stdc++.h>
using namespace std;

int mat[1000][1000];

void solve(){
    int n, k; cin >> n >> k;
    //cout << "N: " << n << endl;
    //cout << "K: " << k << endl;

    for(int i=0; i<n; i++){
        string st; cin >> st;
        //cout << st << endl;
        for(int j=0; j<n; j++){
            mat[i][j] = st[j]-'0';
        }
    }

    int factN = n/k;

    vector<int> ans;
    //cout << "Done" << endl;
    int cnt = 0;
    
    for(int i=0; i<n; i+=k){
        for(int j=0; j<n; j+=k){
            ans.push_back(mat[i][j]);
            //cnt++;
            //cout << "i: " << i << ", j: " << j << endl;
            //cout << "mat[i][j]: " << mat[i][j] << endl;
        }
    }
    
    //cout << "Count: " << cnt << endl;

    //cout << "printing the ans: " << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i];
        if((i%factN) == (factN-1)) cout << endl;
    }
    //cout << "printing done" << endl;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int t; cin >> t;
    while(t--) solve();

    return 0;
}