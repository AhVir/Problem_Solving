#include<bits/stdc++.h>
using namespace std;

int ans[100][100];

void solve(){
  int n; cin >> n;
  for(int i=0; i<n; i++) for(int j=0; j<n; j++) ans[i][j] = 0;

  for(int i=0; i<n; i++){
    ans[i][i] = 1;
  }
  for(int i=0; i<n; i++){
    ans[i][n-1-i] = 1;
  }

  if((n&1) != 0){
    int x = (n-1)/2;
    ans[0][x] = 1;
    ans[x][0] = 1;
  }


  //printing the answer:
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++) cout << ans[i][j] << " ";
    cout << endl;
  }
}

int main(){
  int t; cin >> t;
  while(t--) solve();

  return 0;
}
