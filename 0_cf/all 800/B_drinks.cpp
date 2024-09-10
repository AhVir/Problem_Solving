#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    double orangeJuice = 0;

    for(int i=0; i<n; i++){
        double t; cin >> t;
        orangeJuice += (t/100);
    }

    orangeJuice /= n;
    cout << orangeJuice*100 << endl;

    return 0;
}