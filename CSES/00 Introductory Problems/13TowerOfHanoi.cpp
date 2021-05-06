#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using pii = pair<lli,lli>;
#define INF 2e9+10
#define MOD (lli)(1e9+7)
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FORS(i,start,n) for(int i = start; i < n; ++i)
#define FORSI(i,start,n, increment) for(int i = start; i < n; i += increment)

lli cnt = 0;

bool isPrint = false;

void hanoi(lli n, lli a ,lli b){  // moves n sorted discs from a to b
    if(n == 1){
        cnt++;
        if(isPrint)
            cout << a << " " << b << endl;
        return;
    }
    lli notAB = -1;
    FORS(i,1,3+1){
        if(i != a && i != b){
            notAB = i;
        }
    }
    hanoi(n-1,a,notAB);
    if(isPrint)
        cout << a << " " << b << endl;
    hanoi(n-1,notAB,b);
    cnt++;

    return;
}


int main(int argc, char** argv){

    lli n;
    cin >> n;

    
    hanoi(n,1,3);
    cout << cnt << endl;
    isPrint = true; cnt = 0;
    hanoi(n,1,3);


    return 0;
}

