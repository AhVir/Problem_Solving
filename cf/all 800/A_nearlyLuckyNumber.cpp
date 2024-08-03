#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int cnt = 0;
    while(n>0){
        int lastDig = n%10;
        if(lastDig == 4 || lastDig == 7) cnt++;
        n /= 10;
    }

    if(cnt == 0){
        cout << "NO" << endl;
        return 0;
    }
    while(cnt>0){
        int dig = cnt%10;
        if(dig != 4 && dig != 7){
            cout << "NO" << endl;
            return 0;
        }

        cnt /= 10;
    }

    cout << "YES" << endl;

    return 0;
}