#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    if(pow(a, b) > pow(c, d)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}