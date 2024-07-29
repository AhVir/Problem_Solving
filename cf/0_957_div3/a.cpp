#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int a, b, c; cin >> a >> b >> c;
  
    int i = 5;
    while(i--){
      //finding the max one;
      if(a <= b && a <= c) a++;
      else if(b <= a && b <= c) b++;
      else c++;
    }

    cout << a * b * c << endl;
  }

  return 0;
}
