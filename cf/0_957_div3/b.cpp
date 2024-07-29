#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, k; cin >> n >> k;
  vector<int> pieces;
  while(k--){
    int temp; cin >> temp;
    pieces.push_back(temp);
  }
  sort(pieces.begin(), pieces.end());
  int cnt = 0;
  int s = pieces.size();
  for(int i=0; i<s-1; i++) cnt += (pieces[i]-1 + pieces[i]);

  cout << cnt << endl;
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }


  return 0;
}
