#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    string st; cin >> st;

    int bCnt = 0;
    for(int i=0; i<n; i++) if(st[i]=='B') bCnt++;
    if(abs(k-bCnt) == 0) cout << 0 << endl;
    else if(bCnt < k){
        cout << 1 << endl;
        int diff = k - bCnt;
        int cnt = 0;
        while(diff){
            if(st[cnt] == 'A'){
                diff--;
            }
            cnt++;
        }

        cout << cnt << " B" << endl;
    }
    else{
        cout << 1 << endl;
        int diff = bCnt-k;
        int cnt = 0;
        while(diff){
            if(st[cnt] == 'B'){
                diff--;
            }
            cnt++;
        }

        cout << cnt << " A" << endl;
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}