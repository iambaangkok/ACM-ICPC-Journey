#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using pii = pair<lli,lli>;
#define INF 2e9+10
#define MOD (lli)(1e9+7)
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FORS(i,start,n) for(int i = start; i < n; ++i)
#define FORSI(i,start,n, increment) for(int i = start; i < n; i += increment)

const lli boardSize = 8;

bool available[boardSize][boardSize];
bool attackedRow[boardSize];
bool attackedCol[boardSize];
bool attackedDiagonalUpHillToRight[2*boardSize];
bool attackedDiagonalUpHillToLeft[2*boardSize];

lli ways = 0;

void placeQueen(lli row){
    if(row == boardSize){
        ways++;
        return;
    }
    FOR(j,boardSize){
        if(attackedRow[row] or attackedCol[j] or 
        attackedDiagonalUpHillToRight[row+j] or attackedDiagonalUpHillToLeft[row-j+7] or
        !available[row][j]){
            // cant place here
        }else{
            attackedRow[row] = attackedCol[j] = attackedDiagonalUpHillToRight[row+j] = attackedDiagonalUpHillToLeft[row-j+7] = true;
            placeQueen(row+1);
            attackedRow[row] = attackedCol[j] = attackedDiagonalUpHillToRight[row+j] = attackedDiagonalUpHillToLeft[row-j+7] = false;
        }
    }
    return;
}


int main(int argc, char** argv){
        
    FOR(i,boardSize){
        attackedRow[i] = attackedCol[i] = false;
        FOR(j,boardSize){
            char thisSquare;
            cin >> thisSquare;
            if(thisSquare == '*'){
                available[i][j] = false;
            }else{
                available[i][j] = true;
            }
        }
    }
    placeQueen(0);

    cout << ways << endl;


    return 0;
}

