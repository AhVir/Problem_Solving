#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout << #x << " = " << x << endl

int main(){
    //freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string str; cin >> str;

    int cnt = 0;
    for(int i=0; i<n-1; i++){
        int cur = str[i];
        int next = str[i+1];

        if(cur == next){
            str.erase(i, 1);
            n--;
            i--;
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}