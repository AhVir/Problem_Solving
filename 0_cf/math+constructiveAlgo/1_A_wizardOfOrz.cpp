#include<bits/stdc++.h>
#include <climits>
using namespace std;

void solve(){
  int n; cin >> n;
  vector<int> ans;

  if(n == 1) cout << 9 << endl;
  else if(n == 2) cout << 98 << endl;
  else if(n == 3) cout << 989 << endl;
  else{
    ans.push_back(9);
    ans.push_back(8);
    ans.push_back(9);
    int initVal = 0;

    for(int i=1; i<=(n-3); i++){
      ans.push_back(initVal);
      initVal++;
      initVal = initVal%10;
    }

    for(int x:ans) cout << x;
    cout << endl;
  }
}

int main(){
  int t; cin >> t;

  while(t--) solve();

  return 0;
}
