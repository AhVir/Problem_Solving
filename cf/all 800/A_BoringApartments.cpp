#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x; cin >> x;
    int base = 1;
    int curNum = 1;
    int keyStroke = 0;

    while(base <= 9){
        int loop = 4;
        curNum = base;
        while(loop--){
            if(x == curNum){
                keyStroke += (log10(curNum)+1);
                cout << keyStroke << endl;
                return;
            }
            keyStroke += (log10(curNum)+1);

            curNum = (curNum*10)+base;
        }

        base++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}