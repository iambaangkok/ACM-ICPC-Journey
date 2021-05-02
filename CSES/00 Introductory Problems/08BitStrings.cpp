#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using pii = pair<lli,lli>;
#define INF 2e9+10
#define MOD (lli)(1e9+7)
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FORS(i,start,n) for(int i = start; i < n; ++i)
#define FORSI(i,start,n, increment) for(int i = start; i < n; i += increment)

int main(int argc, char** argv){
    lli n;
    cin >> n;
    lli result = 1;
    FOR(i,n){
        result *= 2;
        result = result%MOD;
    }
    cout << result%MOD << endl;

    return 0;
}

