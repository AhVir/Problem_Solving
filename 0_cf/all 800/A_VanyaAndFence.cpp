#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h; cin >> n >> h;
    int cnt = 0;

    for(int i=0; i<n; i++){
        int t; cin >> t;
        if(t > h) cnt++;
    }

    cnt = (cnt * 2)+(n-cnt);
    cout << cnt << endl;

    return 0;
}