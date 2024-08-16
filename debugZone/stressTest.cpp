#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main(){
    freopen("out.txt", "w", stdout);

    srand(time(NULL));

    // int t = 1;
    int t = rand() % 10 + 1;
    cout << t << endl;
    while(t--){
        int n = rand() % 1000000000 + 3;
        cout << n << endl;
    }

    return 0;
}