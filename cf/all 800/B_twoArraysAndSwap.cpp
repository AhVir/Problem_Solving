#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;

    vector<int> a;
    vector<int> b;
    for(int i=0; i<n; i++){
        int t; cin >> t;
        a.push_back(t);
    }
    for(int i=0; i<n; i++){
        int t; cin >> t;
        b.push_back(t);
    }

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    for(int i=0; i<k; i++){
        if(a[i] < b[i]) a[i] = b[i];
    }

    cout << accumulate(a.begin(), a.end(), 0) << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();

    return 0;
}