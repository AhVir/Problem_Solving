#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define pr(x) cout << #x << " = " << x << endl

using namespace std;


int main() {
    freopen("in.txt", "r", stdin);
	int q;
	cin >> q;
	forn(_, q){
		int n, m;
		cin >> n >> m;
		vector<string> s(n);
		forn(i, n)
			cin >> s[i];
        forn(i, n) cout << s[i];
        cout << endl;
		vector<int> cntn(n), cntm(m);
		forn(i, n) forn(j, m){
			cntn[i] += (s[i][j] == '.');
			cntm[j] += (s[i][j] == '.');
		}

        pr(cntn);
        pr(cntm);
        
		// int ans = n + m;
		// forn(i, n) forn(j, m){
		// 	ans = min(ans, cntn[i] + cntm[j] - (s[i][j] == '.'));
		// }
		// cout << ans << "\n";
	}
	return 0;
}