#include<bits/stdc++.h>
using namespace std;

int arr[5];

#define int long long
#define pr(x) cout << #x << " = " << x << endl

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;
    arr[1] = a, arr[2] = b, arr[3] = c, arr[4] = d;

    //for(int i=1; i<=4; i++) cout << arr[i] << " ";
    //cout << endl;

    string st; cin >> st;
    int n = st.size();

    int calories = 0;
    for(int i=0; i<n; i++){
        calories += arr[st[i]-'0'];
    }

    cout << calories << endl;

    return 0;
}