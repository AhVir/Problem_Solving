#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string st; cin >> st;
    int cntA = 0, cntD = 0;

    for(int i=0; i<n; i++){
        if(st[i] == 'A') cntA++;
        else cntD++;
    }

    if(cntA > cntD) cout << "Anton" << endl;
    else if(cntD > cntA) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}