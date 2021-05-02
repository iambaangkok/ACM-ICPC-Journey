#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define INF 2e9+10;
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FORS(i,start,n) for(int i = start; i < n; ++i)

int main(int argc, char* argv){

    lli tests;
    cin >> tests;
    FOR(i,tests){
        lli row, col;
        cin >> row >> col;
        if(row == 1 and col == 1){
            cout << 1 << endl;
            continue;
        }
        lli mx = max(row,col);
        lli start = (mx-1)*(mx-1);
        lli end = start + 2*mx;
        if(mx%2 == 0){ // starts from top
            if(row > col){
                cout << end - col << endl;
            }else if(row == col){
                cout << start + row << endl;
            }else if(row < col){
                cout << start + row << endl;
            }
        }else{ // starts from side
            if(row > col){
                cout << start + col << endl;
            }else if(row == col){
                cout << start + col << endl;
            }else if(row < col){
                cout << end - row << endl;
            }
        }

    }

    return 0;
}

