#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    int cntOf2 = 0, cntOf3 = 0;
    if(n%2 == 0){
        cntOf2 = n/2;
    }
    else{
        cntOf3 = 1;
        n -= 3;
        cntOf2 = n/2;
    }

    cout << cntOf2+cntOf3 << endl;
    while(cntOf2){
        cout << 2;
        if(cntOf3 != 0) cout << " ";
        else if(cntOf2 != 1) cout << " ";
        else if(cntOf3 == 0 && cntOf2 == 1) cout << "\n";
        cntOf2--;
    }    
    while(cntOf3){
        cout << 3;
        if(cntOf3 != 1) cout << " ";
        else cout << "\n";
        cntOf3--;
    }

    return 0;
}