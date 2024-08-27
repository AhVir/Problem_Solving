#include<bits/stdc++.h>
using namespace std;

void solve(){
    int hh, mm; cin >> hh >> mm;
    int totalMin = (60-mm);
    hh++;

    totalMin += ((24-hh)*60);

    cout << totalMin << endl;
}

int main(){
    ios::sync_with_stdio(false);    
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}