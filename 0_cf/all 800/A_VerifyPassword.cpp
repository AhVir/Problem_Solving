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
//#define int unsigned long long

void solve(){
    int n; cin >> n;
    string pass; cin >> pass;
    vector<int> nums;
    vector<char> chars;

    //checking if char ends with another char or not
    for(int i=0; i<n-1; i++){
        if(pass[i] >= 'a' && pass[i] <= 'z'){
            if(pass[i+1] >= '0' && pass[i+1] <= '9'){
                prt("No");
                return;
            }
        }
        if(pass[i] >= 'a' && pass[i] <= 'z') chars.push_back(pass[i]);
        else nums.push_back((pass[i]-'0'));
    }
    if(pass[n-1] >= 'a' && pass[n-1] <= 'z') chars.push_back(pass[n-1]);
    else nums.push_back((pass[n-1]-'0'));


    vector<int> sortedNums = nums;
    vector<char> sortedChars = chars;

    sort(sortedNums.begin(), sortedNums.end());
    sort(sortedChars.begin(), sortedChars.end());

    for(int i=0; i<nums.size(); i++){
        if(nums[i] != sortedNums[i]){
            prt("NO");
            return;
        }
    }
    for(int i=0; i<chars.size(); i++){
        if(chars[i] != sortedChars[i]){
            prt("NO");
            return;
        }
    }

    prt("YES");
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // int t = 1;
    while(t--) solve();

    return 0;
}