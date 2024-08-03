#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout << #x << " = " << x << endl

void solve(){
    int n; cin >> n;

    int oddNum = n/3;
    int evenNum = (n-oddNum)/2;
    oddNum += (n-(evenNum*2)-oddNum);

    cout << oddNum << " " << evenNum << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}