// link: https://usaco.org/index.php?page=viewproblem2&cpid=595

#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    //freopen("in.txt", "r", stdin);
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> ans;
    int sum = 0;
    for(int i=0; i<n; i++){
        int t; cin >> t;
//        cout << t << " ";
        sum += t;
        ans.push_back(sum);
    }
//    cout << endl;
//    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
//    cout << endl;
    
    for(int i=0; i<ans.size(); i++) ans[i] = ans[i]%7;

//    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
//    cout << endl;
    
    int modPreSum[7];
    for(int i=0; i<7; i++) modPreSum[i] = -1;
    int maxIdxDiff = 0;

    for(int i=0; i<ans.size(); i++){
        if(modPreSum[ans[i]] != -1){
            int diff = i-modPreSum[ans[i]];
            maxIdxDiff = max(maxIdxDiff, diff);
        }
        else{
            modPreSum[ans[i]] = i;
        }
    }

    cout << maxIdxDiff << endl;

    return 0;
}