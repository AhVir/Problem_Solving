#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int groupCnt = 1;
    int lastNum; cin >> lastNum;
    int t;

    for(int i=1; i<n; i++){
        cin >> t;

        if(t == lastNum) continue;
        else{
            groupCnt++;
            lastNum = t;
        }
    }

    cout << groupCnt << endl;

    return 0;
}