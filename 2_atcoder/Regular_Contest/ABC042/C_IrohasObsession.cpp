#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
//#define int long long
//#define int unsigned long long

void solve(){
    int number, k; cin >> number >> k;
    string num;
    int nums[10] = {0};

    for(int i=0; i<k; i++){
        int t; cin >> t;
        nums[t] = -1;
    }

    while(number>0){
        int lastNum = number%10;
        number = number/10;
        num.push_back(lastNum+'0');
    }
    reverse(num.begin(), num.end());

    for(int X:nums) cout << X << " ";
    cout << endl;
    pr(num);


}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}