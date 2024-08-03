#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;

        int maxNum = max(a, max(b, c));
        int minNum = min(a, min(b, c));
        int thirdNum = (a+b+c)-(maxNum+minNum);

        if(maxNum - minNum == thirdNum) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}