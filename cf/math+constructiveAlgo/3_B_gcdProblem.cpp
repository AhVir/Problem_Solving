#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin >> n;
  for(int i=2; i<=n; i++){
    int a = i;
    int b = n-a-1;

    if(gcd(a, b) == 1){
      cout << a << " " << b << " " << 1 << endl;
      return;
    }
  }
}

int main(){
  int t; cin >> t;
  while(t--) solve();

  return 0;
}
