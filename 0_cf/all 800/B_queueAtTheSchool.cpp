#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t; cin >> n >> t;
    string que; cin >> que;

    while(t--){
        for(int i=0; i<n-1; i++){
            if(que[i] == 'B' && que[i+1] == 'G'){
                que[i] = 'G';
                que[i+1] = 'B';
                i++;
            }
        }
    }
    cout << que << endl;

    return 0;
}