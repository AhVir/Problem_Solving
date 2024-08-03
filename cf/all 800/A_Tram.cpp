#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int n; cin >> n;

    int maxCap = 0;
    int currentPas = 0;

    while(n--){
        int a, b; cin >> a >> b; 

        currentPas -= a;
        currentPas += b;

        maxCap = max(maxCap, currentPas);
    }

    cout << maxCap << endl;

    return 0;
}