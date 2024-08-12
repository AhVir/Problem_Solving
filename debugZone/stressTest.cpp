#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("out.txt", "w", stdout);

    srand(time(NULL));

    // int t = 1;
    int t = rand() % 10 + 1;
    cout << t << endl;
    while(t--){
        int n = rand() % 10 + 3;
        cout << n << endl;

        for(int i=0; i<n; i++){
            int temp = rand()%20 + 1;
            cout << temp << " ";
        }
        cout << endl;
    }

    return 0;
}