#include<bits/stdc++.h>
using namespace std;

#define int long long

int mat[100][100];

bool isValid(int x, int y, int n, int m){
    if(x >= 0 && x < n && y >=0 && y < m) return true;
    else return false;
}

void solve(){
    int n, m; cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int temp; cin >> temp;
            mat[i][j] = temp;
        }
    }

    int xMv[] = {0, 0, 1, -1};
    int yMv[] = {-1, 1, 0, 0};

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // for each element
            bool flag = true;
            int maxNeighbour = 0;

            for(int k=0; k<4; k++){
                int newX = i + xMv[k];
                int newY = j + yMv[k];

                if(isValid(newX, newY, n, m) && mat[i][j] <= mat[newX][newY]){
                    //cout << "element: " << mat[i][j] << ", new: " << mat[newX][newY] << "nX, nY: " << newX << "," << endl;
                    flag = false;
                    break;
                }
                else if(isValid(newX, newY, n, m) && mat[i][j] > mat[newX][newY]){
                    maxNeighbour = max(maxNeighbour, mat[newX][newY]);
                }
            }
            //cout << "element: " << mat[i][j] << ", ";
            //cout << "flag: " << flag << " & max: " << maxNeighbour << endl;

            if(flag) mat[i][j] = maxNeighbour;
        }
    } 

    //cout << "printing the array: " << endl;
    //printing the array:
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main(){
    //freopen("in.txt", "r", stdin);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}