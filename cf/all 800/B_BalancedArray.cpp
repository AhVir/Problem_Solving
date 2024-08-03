#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve(){
    int n; cin >> n;

    if(n%4 == 0){
        cout << "YES" << endl;

        int half = n/2;
        vector<int> ans;

        int evenNum = 2;
        for(int i=0; i<half; i++){
            ans.push_back(evenNum);
            evenNum += 2;
        }
        int lastEvenNum = ans[half-1];

        for(int i=0; i<half-1; i++) ans.push_back(ans[i]-1);
        ans.push_back(lastEvenNum+half-1);


        for(int x:ans) cout << x << " ";
        cout << endl;
    }
    else cout << "NO" << endl;
}

int32_t main(){
    int t; cin >> t;
    while(t--) solve();

    return 0;
}