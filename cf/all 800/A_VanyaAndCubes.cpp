#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int ht = 0;
    int num = 1;
    int base = 1;
    while(num <= n){
        ht++;
        num += (++base);
        cout << "n: " << num << ", ht: " << ht << endl;
    }
    cout << ht << endl;

    return 0;
}