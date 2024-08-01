#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q; cin >> n >> q;
    string st1, st2; cin >> st1 >> st2;

    while(q--){
        int x, y; cin >> x >> y;
        x -= 1, y -= 1;
        string storeSt1 = st1, storeSt2 = st2;

        //cout << st1 << "- " << st2 << endl;

        string s1 = st1.substr(x, (y-x+1));
        string s2 = st2.substr(x, (y-x+1));
        
        //cout << s1 << ", " << s2 << endl;

        int cntA  = 0, cntB = 0;

        for(int i=0; i<s1.size(); i++){
            char target = s1[i];
            bool flag = true;
            for(int i=0; i<s2.size(); i++){
                if(s2[i] == target){
                    flag = false;
                    s2[i] = '_';
                    break;
                }
            }
            if(flag) cntA++;

            bool flag2 = true;
            target = s2[i];
            for(int i=0; i<s1.size(); i++){
                if(s1[i] == target){
                    flag = false;
                    s1[i] = '_';
                    break;
                }
            }
            if(flag) cntB++;
        }

        cout << min(cntA, cntB) << endl;

        st1 = storeSt1, st2 = storeSt2;
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}