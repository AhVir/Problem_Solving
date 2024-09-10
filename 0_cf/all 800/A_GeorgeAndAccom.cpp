#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin >> n;
    int cnt = 0;

    for(int i=0; i<n; i++){
        int cur, capacity; cin >> cur >> capacity;

        if(capacity-cur >= 2) cnt++;
    }

    cout << cnt << endl;

    return 0;
}