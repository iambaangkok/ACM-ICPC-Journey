#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define INF 2e9+10;
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FORS(i,start,n) for(int i = start; i < n; ++i)

int main(int argc, char* argv){

    lli n = 1;
    cin >> n;
    if(n <= 3 and n != 1){
        cout << "NO SOLUTION\n"; return 0;
    }
    if(n%2 == 0){
        lli half = n/2;
        FORS(i,1,(n+1)/2+1){
            cout << i+half << " " << i << " ";
        }
    }else{
        lli half = n/2;
        FORS(i,2,(n+1)/2+1){
            cout << i+half << " " << i << " ";
        }
        cout << 1 << endl;
    }
    
    return 0;
}

