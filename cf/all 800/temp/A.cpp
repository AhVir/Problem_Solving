#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout << #x << " = " << x << endl

void solve(){
    int n; cin >> n;
    string st; cin >> st;

    int ans[] = {0, 0, 0, 0};
    int loop = 4*n;
    for(int i=0; i<loop; i++){
        char t = st[i];
        if(t != '?') ans[t-'A']++;
    }

    /*
    pr(ans[0]);
    pr(ans[1]);
    pr(ans[2]);
    pr(ans[3]);
    */
   int cnt = 0;
   for(int i=0; i<4; i++){
    if(ans[i] > n) cnt+=n;
    else cnt += ans[i];
   }

   //pr(cnt);

   cout << cnt << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}