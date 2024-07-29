#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, m, k; cin >> n >> m >> k;
  vector<int> ans;


  for(int i=n; i>=k; i--) ans.push_back(i);
  for(int i=m+1; i<k; i++) ans.push_back(i);
  for(int i=1; i<=m; i++) ans.push_back(i);


  //printing the answers:
  for(int i=0; i<n; i++) cout << ans[i] << " ";
  cout << endl;
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }

  return 0;
}
