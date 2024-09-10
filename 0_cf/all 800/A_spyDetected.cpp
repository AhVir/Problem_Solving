#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> nums;
    int num1; cin >> num1;
    nums.push_back(num1);

    int num1Cnt = 1;
    int num2, num2Cnt = 0;
    for(int i=1; i<n; i++){
        int t; cin >> t;
        if(t == num1) num1Cnt++;
        else num2 = t, num2Cnt++;
        nums.push_back(t);
    }

    if(num1Cnt == 1){
        cout << (find(nums.begin(), nums.end(), num1)-nums.begin())+1 << endl;
    }
    else{
        cout << (find(nums.begin(), nums.end(), num2)-nums.begin())+1 << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}