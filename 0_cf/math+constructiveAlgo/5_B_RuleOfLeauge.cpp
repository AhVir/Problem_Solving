#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, x, y; cin >> n >> x >> y;

  if(x!=0 && y!=0) cout << -1 << endl;
  else if(x==0 && y==0) cout << -1 << endl;
  else{
    int temp = max(x, y);
    if((n-1)%temp != 0) cout << -1 << endl;
    else{
      int maxWin = max(x, y);
      //cout << "Max: " << maxWin << endl;
      int initCount = 0;
      int playerWon = 1;
      vector<int> ans;

      for(int i=1; i<=n-1; i++){
        int p2 = i+1;
        if(initCount == maxWin) initCount = 0, playerWon = p2;
        //cout << "p1: " << i << ", p2: " << p2 << endl;
        cout << playerWon;
        initCount++;
        if(i != n-1) cout << " ";
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
