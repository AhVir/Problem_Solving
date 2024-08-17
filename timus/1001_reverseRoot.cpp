#include<bits/stdc++.h>
using namespace std;

#define input1 freopen("in.txt", "r", stdin)
#define debugin freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
//#define int long long
//#define int unsigned long long

void solve(){
  std::string input;
  std::vector<unsigned long long> numbers;

  // Read entire input until EOF or end of the input stream
  while (std::getline(std::cin, input)) {
      std::stringstream ss(input);
      unsigned long long number;
      
      // Extract numbers from the line
      while (ss >> number) {
          numbers.push_back(number);
      }
  }

  reverse(numbers.begin(), numbers.end());

  // Output the numbers to verify (or process as needed)
  for (unsigned long long num : numbers) {
    pr(sqrtl(num));
  }
}

int32_t main(){
  input1;
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  setprecision(4);

  //int t; cin >> t;
  int t = 1;
  while(t--) solve();

  return 0;
}