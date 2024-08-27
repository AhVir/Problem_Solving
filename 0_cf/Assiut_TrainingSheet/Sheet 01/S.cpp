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
    double num; cin >> num;
    string interval1 = "[0,25]", interval2 = "(25,50]";
    string interval3 = "(50,75]", interval4 = "(75,100]";

    if(num < 0.0 || num > 100.0) prt("Out of Intervals");
    else{
        if(num >= 0.0 && num <=25.0) prt("Interval " + interval1);
        else if(num > 25.0 && num <=50.0) prt("Interval " + interval2);
        else if(num > 50.0 && num <=75.0) prt("Interval " + interval3);
        else prt("Interval " + interval4);
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}