#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
//#define int long long
//#define int unsigned long long

int occur[26];

void solve(){
    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        int t; cin >> t;
        nums[i] = t;
    }

    //resetting the occur array as there is queries
    for(int i=0; i<26; i++) occur[i] = 0;

    string ans = "";
    int charSelector = 0;

    for(int i=0; i<n; i++){
        if(nums[i] == 0){
            char temp = 'a' + charSelector;
            ans.push_back(temp);
            occur[charSelector]++;
            charSelector++;
        }
        else{
            for(int j=0; j<26; j++){
                if(occur[j] == nums[i]){
                    char temp = 'a' + j;
                    ans.push_back(temp);
                    occur[j]++;
                }
            }
        }
    }
    pr(ans);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}