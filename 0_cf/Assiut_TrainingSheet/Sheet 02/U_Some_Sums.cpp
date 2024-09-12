#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
#define int long long
//#define int unsigned long long

int digitSum(int i){
    int sum = 0;
    while(i > 0){
        int lastNum = i%10;
        sum += lastNum;
        i /= 10;
    }

    return sum;
}

void solve(){
    int n, a, b; cin >> n >> a >> b;
    int sum = 0;
    for(int i=1; i<=n; i++){
        int tempDigitSum = digitSum(i); 
        // pr(tempDigitSum);

        if(tempDigitSum >= a && tempDigitSum <= b){
            // pr(tempDigitSum); pr(i);
            sum += i;
        }
    }

    prt(sum);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}