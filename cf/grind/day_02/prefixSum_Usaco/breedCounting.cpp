// linK: https://usaco.org/index.php?page=viewproblem2&cpid=572
#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout << #x << "=" << x << endl
int preSum[100000][3];

void soln(){
    int n, q; cin >> n >> q;
    vector<int> nums;
    //setting up the prefix sum array
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            preSum[i][j] = 0;
        }
    }
    
    for(int i=0; i<n; i++){
        int t; cin >> t;
        nums.push_back(t);
        //preSum operations
        if(i!=0){
            preSum[i][0] = preSum[i-1][0];
            preSum[i][1] = preSum[i-1][1];
            preSum[i][2] = preSum[i-1][2];
        }
        preSum[i][t-1]++;
    }
    /*
    cout <<"printing the ans" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cout << preSum[i][j] << " ";
        }
        cout << endl;
    }
    */

    //cout <<"q: " << endl;

    while(q--){
        int a, b; cin >> a >> b;
        a -= 1, b -= 1;
        
        if(a == 0){
            cout << preSum[b][0] << " " << preSum[b][1] << " " << preSum[b][2] << endl;
        }
        else{
            cout << preSum[b][0]-preSum[a-1][0] << " " << preSum[b][1]-preSum[a-1][1] << " " << preSum[b][2]-preSum[a-1][2] << endl;
        }
    }
}

int main(){
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    soln();

    return 0;
}