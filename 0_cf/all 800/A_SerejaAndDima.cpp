#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    list<int> cards;

    for(int i=0; i<n; i++){
        int t; cin >> t;
        cards.push_back(t);
    }

    int sCnt = 0, dCnt = 0;
    for(int i=0; i<n; i++){
        int first = cards.front();
        int last = cards.back();

        if(first >last){
            if(i%2 == 0) sCnt += first;
            else dCnt += first;
            cards.pop_front();
        }
        else{
            if(i%2 == 0) sCnt += last;
            else dCnt += last;

            cards.pop_back();
        }
    }

    cout << sCnt << " " << dCnt << endl;

    return 0;
}