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
    int a1, a2, b1, b2; cin >> a1 >> a2 >> b1 >> b2;

    //if all nums are same
    if(a1 == a2 && a2 == b1 && b1 == b2){
        prt(0);
        return;
    }

    //if each persons 2 cards are same
    if(a1 == a2 && b1 == b2){
        if(a1 > b1){
            prt(4);
            return;
        }
        else if(b1 > a1){
            prt(0);
            return;
        }
    }

    //if case of any a1/a2 == b1/b2
    if(max(a1, a2) == max(b1, b2)){
        if(min(a1, a2) > min(b1, b2)){
            prt(2);
            return;
        }
        else if(min(a1, a2) < min(b1, b2)){
            prt(0);
            return;
        }
    }
    if(max(a1, a2) == min(b1, b2)){
        prt(0);
        return;
    }
    if(min(a1, a2) == max(b1, b2)){
        prt(4);
        return;
    }
    if(min(a1, a2) == min(b1, b2)){
        if(max(a1, a2) < max(b1, b2)){
            prt(0);
            return;
        }
        else if(max(a1, a2) > max(b1, b2)){
            prt(2);
            return;
        }
    }

    //a1, a2 > b1, b2
    if(max(a1, a2) > max(b1, b2) && min(a1, a2) > max(b1, b2)){
        prt(4);
        return;
    }
    else if(max(b1, b2) > max(a1, a2) && min(b1, b2) > max(a1, a2)){
        prt(0);
        return;
    }

    if(max(a1, a2) > max(b1, b2) && min(a1, a2) < max(b1, b2)){
        if(min(a1, a2) > min(b1, b2)){
            prt(2);
            return;
        }
        else if(min(a1, a2) < min(b1, b2)){
            prt(0);
            return;
        }
    }

    if(max(a1, a2) < max(b1, b2)){
        if(min(a1, a2) > min(b1, b2)){
            prt(0);
            return;
        }
        else if(min(a1, a2) < min(b1, b2)){
            prt(0);
            return;
        }
    }

    if(max(a1, a2) < min(b1, b2)){
        prt(0);
        return;
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