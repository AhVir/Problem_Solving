#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int num = 0, base = 1, sumOfNums = 0; 
    int ht = 0;
    while(num < n){
        ht++;

        sumOfNums += num;
        num += (sumOfNums+base);
        base++;
    }

    cout << ht << endl;

    return 0;
}