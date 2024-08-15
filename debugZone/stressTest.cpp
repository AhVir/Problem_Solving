#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("out.txt", "w", stdout);

    srand(time(NULL));

    // int t = 1;
    int t = rand() % 10 + 1;
    cout << t << endl;
    while(t--){
        int n = rand() % 10 + 3;
        // int n = 4;
        // cout << n << endl;

        string ans = "";
        string half = "";
        for(int i=0; i<=n/2; i++){
            int temp = rand()%26;
            char t = 'a' + temp;
            ans.push_back(t);
            if(i != (n/2)) half.push_back(t);
        }
        reverse(half.begin(), half.end());
        ans += half;
        cout << ans << endl;
    }

    return 0;
}