#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin >> n;

  if((n&1) == 0){
    cout << "YES" << endl;
    for(int i=1; i<=n; i++){
      if((i&1) == 0) cout << "5";
      else cout << "-5";

      if(i!=n) cout << " ";
    }
    cout << endl;
  }
  else{
    int k = (n-1)/2;
    int a = k-1;
    int b = -k;
    if(a == 0 || b == 0) cout << "NO" << endl;
    else{
      cout << "YES" << endl;
      for(int i=1; i<=n; i++){
        if((i&1) != 0) cout << a;
        else cout << b;

        if(i!=n) cout << " ";
      }
      cout << endl;
    }
  }
}

int main(){
  int t; cin >> t;
  while(t--) solve();

  return 0;
}
