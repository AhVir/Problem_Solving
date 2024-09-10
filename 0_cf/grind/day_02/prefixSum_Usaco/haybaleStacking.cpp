// link: https://www.spoj.com/problems/HAYBALE/
// link(original): https://usaco.org/index.php?page=viewproblem2&cpid=104

#include<bits/stdc++.h>
using namespace std;

int mat[1000000+5];
int preSum[1000000+5];

void soln(){
    //freopen("in.txt", "r", stdin);
    int n, k; cin >> n >> k;
    //for(int i=0; i<n; i++) cout << mat[i] << " ";
    //cout << endl;
    while(k--){
        //using 0-based indexing
        int a, b; cin >> a >> b;
        a -= 1, b -= 1; //making 0-based indexed

        mat[a]++;
        mat[b+1]--;
    }

    //cout << "After: " << endl;
    //for(int i=0; i<n; i++) cout << mat[i] << " ";
    //cout << endl;

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += mat[i];
        preSum[i] = sum;
    }

    //cout << "PreSum: " << endl;
    //for(int i=0; i<n; i++) cout << preSum[i] << " ";
    //cout << endl;

    //ops for finding median
    sort(preSum, preSum+n);


    int medianIdx = (++n/2)-1;

    cout << preSum[medianIdx] << endl;
}

int main(){
    soln();

    return 0;
}