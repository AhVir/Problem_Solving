#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n, k; cin >> n >> k;

    while(k--){
        int lastDig = n%10;
        if(lastDig==0) n = n/10;
        else n--;
    }

    cout << n << endl;

    return 0;
}