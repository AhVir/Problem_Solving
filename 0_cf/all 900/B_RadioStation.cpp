#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
//#define int long long
//#define int unsigned long long

void solve(){
    int n, m; cin >> n >> m;
    vector<string> mainNames(n), mainIps(n);
    for(int i=0; i<n; i++){
        string t1, t2; cin >> t1 >> t2;
        mainNames[i] = t1, mainIps[i] = t2;
    }

    vector<string> configureNames(m), configureIps(m);
    for(int i=0; i<m; i++){
        string t1, t2; cin >> t1 >> t2;
        configureNames[i] = t1, configureIps[i] = t2;
    }

    for(int i=0; i<m; i++){
        string targetIP = configureIps[i];
        targetIP.erase(targetIP.length()-1, 1);

        int idx = -1;
        for(int i=0; i<n; i++){
            if(mainIps[i] == targetIP){
                idx = i;
                break;
            }
        }

        cout << configureNames[i] << " " << configureIps[i] << " #" << mainNames[idx] << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}