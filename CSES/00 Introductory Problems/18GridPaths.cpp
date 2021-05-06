#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using pii = pair<lli,lli>;
#define INF 2e9+10
#define MOD (lli)(1e9+7)
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FORS(i,start,n) for(int i = start; i < n; ++i)
#define FORSI(i,start,n, increment) for(int i = start; i < n; i += increment)

const lli GRID_SIZE = 7;
const lli LEN = 48;
lli visited[GRID_SIZE][GRID_SIZE];

const pii DIR[4] = {{-1,0}, {+1,0}, {0,-1}, {0,+1}}; // U D L R

string str;
lli paths[LEN];
lli cnt = 0;
lli cntt = 0;
void dfs(lli i, lli row, lli col){
    cntt++;
    if (((row + 1 == GRID_SIZE || (visited[row - 1][col] && visited[row + 1][col])) && col - 1 >= 0 && col + 1 < GRID_SIZE && !visited[row][col - 1] && !visited[row][col + 1]) ||
        ((col + 1 == GRID_SIZE || (visited[row][col - 1] && visited[row][col + 1])) && row - 1 >= 0 && row + 1 < GRID_SIZE && !visited[row - 1][col] && !visited[row + 1][col]) ||
        ((row == 0 || (visited[row + 1][col] && visited[row - 1][col])) && col - 1 >= 0 && col + 1 < GRID_SIZE && !visited[row][col - 1] && !visited[row][col + 1]) ||
        ((col == 0 || (visited[row][col + 1] && visited[row][col - 1])) && row - 1 >= 0 && row + 1 < GRID_SIZE && !visited[row - 1][col] && !visited[row + 1][col])){
        return;
    }
        
    if(row < 0 || col < 0 || row >= GRID_SIZE || col >= GRID_SIZE || visited[row][col]){
        return;
    }
    if(row == 6 && col == 0 && i != LEN){
        return;
    }
    else if(i == LEN){
        if(row == 6 && col == 0){
            cnt++;
            return;
        }else{
            return;
        }
    }
    visited[row][col] = true;
    lli ans = 0;
    if(i < LEN){
        if(paths[i] == -1){
            FOR(j,4){
                lli newRow = row+DIR[j].first;
                lli newCol = col+DIR[j].second;
                if(!visited[newRow][newCol] && newRow >= 0 && newRow < GRID_SIZE && newCol >= 0 && newCol < GRID_SIZE){
                    dfs(i+1,newRow,newCol);
                }
            }
        }else{
            lli newRow = row+DIR[paths[i]].first;
            lli newCol = col+DIR[paths[i]].second;
            if(!visited[newRow][newCol] && newRow >= 0 && newRow < GRID_SIZE && newCol >= 0 && newCol < GRID_SIZE){
                dfs(i+1,newRow,newCol);
            }
        }
    }
    visited[row][col] = false;
    return;
}

int main(int argc, char** argv){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    FOR(i,GRID_SIZE){
        FOR(j,GRID_SIZE){
            FOR(k,LEN){ 
                visited[i][j] = false;
            }
        }
    }
    cin >> str;
    FOR(i,LEN){
        paths[i] = ((str[i] == 'U')? 0 : (str[i] == 'D')? 1 : (str[i] == 'L')? 2 : (str[i] == 'R')? 3:-1);
    }
    dfs(0,0,0);
    cout << cnt << endl;
    //cout << cntt << endl;
    return 0;
}

