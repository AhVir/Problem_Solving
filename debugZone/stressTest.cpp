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
        int n = rand() % 10 + 1;
        cout << n << endl;
        for(int i=0; i<n; i++){
            int temp = rand() % 26;
            char tempChar = 'a' + temp;
            cout << tempChar;
        }
        cout << endl;
    }

    return 0;
}