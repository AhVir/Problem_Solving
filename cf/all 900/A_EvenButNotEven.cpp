#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
//#define int long long
#define int unsigned long long

void solve(){
    int n; cin >> n;
    string numStr; cin >> numStr;
    // int num; cin >> num;

    // string numStr = "";
    // while(num>0){
    //     int temp = num%10;
    //     numStr.push_back(temp+'0');
    //     num = num/10;
    // }
    // reverse(numStr.begin(), numStr.end());
    // // pr(numStr);
    
    int oddEndIdx = -1;
    for(int i=0; i<n; i++){
        int tempNum = numStr[i]-'0';
        if(tempNum%2 != 0) oddEndIdx = i;
    }
    if(oddEndIdx == -1){
        prt(-1);
        return;
    }
    numStr.erase(numStr.begin()+oddEndIdx+1, numStr.end());
    // pr(numStr);
    int oddCnt = 0, evenCnt = 0;
    for(int i=0; i<numStr.size(); i++){
        int tempNum = numStr[i]-'0';
        if(tempNum%2 != 0) oddCnt++;
        else evenCnt++;
    }

    // pr(oddCnt);
    // pr(evenCnt);
    if(oddCnt == 1){
        prt(-1);
        return;
    }
    if(oddCnt%2 == 0){
        prt(numStr);
        return;
    }

    //removing that one odd num that making oddCnt odd
    for(int i=oddEndIdx-1; i>=0; i--){
        int tempNum = numStr[i]-'0';
        if(tempNum%2 != 0){
            numStr.erase(i, 1);
            prt(numStr);
            return;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}