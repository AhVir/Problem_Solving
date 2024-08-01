// linK: https://judge.yosupo.jp/problem/static_range_sum

#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout << #x << "=" << x <<endl
#define int long long

void solve(){
    int n, q; cin >> n >> q;
    vector<int> nums;
    int sum = 0;
    vector<int> ans;
    for(int i=0; i<n; i++){
        int t; cin >> t; 
        nums.push_back(t);
        sum += t;
        ans.push_back(sum);
    }

    //for(int i=0; i<n; i++) cout << ans[i] << " ";
    //cout << endl;

    while(q--){
        int l, r; cin >> l >> r;
        r -= 1;
        if(l == 0){
            cout << ans[r] << endl;
        }
        else{
            int val = ans[r] - ans[l-1];
            cout << val << endl;
        }
    }
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}