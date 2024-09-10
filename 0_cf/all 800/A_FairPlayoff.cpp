#include<bits/stdc++.h>
using namespace std;

int ar[4];

void solve(){
    for(int i=0; i<4; i++){
        int t; cin >> t;
        ar[i] = t;
    }
    int finalist1 = max(ar[0], ar[1]);
    int finalist2 = max(ar[2], ar[3]);

    sort(ar, ar+4); 
    int maxNum = ar[3], secMaxNum = ar[2];

    //cout << "max: " << maxNum << ", " << "secMax: " << secMaxNum << endl;
    //cout << "f1: " << finalist1 << ", " << "finalist2: " << finalist2 << endl;

    if((finalist1 == maxNum || finalist1 == secMaxNum) && (finalist2 == secMaxNum || finalist2 == maxNum)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}