#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2; cin >> s1 >> s2;
    int n = s1.size();

    int val1 = 0, val2 = 0;
    for(int i=0; i<n; i++){
        val1 += (int)s1[i];
        val2 += (int)s2[i];
    }

    for(int i=0; i<n; i++){
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if(c1 != c2){
            if(c1 > c2) cout << 1 << endl;
            else cout << -1 << endl;

            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}