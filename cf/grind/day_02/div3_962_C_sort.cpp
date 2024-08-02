#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n, q; cin >> n >> q;
    string st1, st2; cin >> st1 >> st2;

    vector<vector<int>> preSum1(n+1, vector<int>(26, 0));
    vector<vector<int>> preSum2(n+1, vector<int>(26, 0));

    
    //for the first string
    for(int i=1; i<=n; i++){
        int val = st1[i-1] - 'a';

        preSum1[i][val]++;

        for(int j=0; j<26; j++){
            preSum1[i][j] += preSum1[i-1][j];
        }
    }

    //for the second string
    for(int i=1; i<=n; i++){
        int val = st2[i-1] - 'a';

        preSum2[i][val]++;

        for(int j=0; j<26; j++){
            preSum2[i][j] += preSum2[i-1][j];
        }
    }

    /*
    cout << "PreSum 01: " << endl;
    for(int i=0; i<26; i++) cout << preSum1[n][i] << " ";
    cout << endl;

    cout << "PreSum 02: " << endl;
    for(int i=0; i<26; i++) cout << preSum2[n][i] << " ";
    cout << endl;
    */

    while(q--){
        int l, r; cin >> l >> r;
        
        /*
        cout << "preSum[r]: ";
        for(int i=0; i<26; i++){
            cout << preSum1[r][i] << " ";
        }
        cout << endl;

        cout << "preSum[l-1]: ";
        for(int i=0; i<26; i++){
            cout << preSum1[l-1][i] << " ";
        }
        cout << endl;

        cout << "preSum2[r]: ";
        for(int i=0; i<26; i++){
            cout << preSum2[r][i] << " ";
        }
        cout << endl;

        cout << "preSum2[l-1]: ";
        for(int i=0; i<26; i++){
            cout << preSum2[l-1][i] << " ";
        }
        cout << endl;

        cout << "preSum[r]-preSum[l-1]: ";
        for(int i=0; i<26; i++){
            cout << preSum1[r][i]-preSum1[l-1][i] << " ";
        }
        cout << endl;

        cout << "preSum2[r]-preSum2[l-1]: ";
        for(int i=0; i<26; i++){
            cout << preSum2[r][i]-preSum2[l-1][i] << " ";
        }
        cout << endl;
        */

        int diff = 0;
        for(int i=0; i<26; i++){
            int val1 = preSum1[r][i] - preSum1[l-1][i];
            int val2 = preSum2[r][i] - preSum2[l-1][i];

            diff += abs(val1-val2);
        }
        //cout << "Diff: " << diff << endl;
        cout << diff/2 << endl;

        //cout << "DONE!" << endl;
    }
}
int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}