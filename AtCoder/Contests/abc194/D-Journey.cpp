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
    lli n = 3;
    cin >> n;
    float result = 0;
    FORS(i,1,n){
        result += 1.00*(n)/(float)(n-i);
    }
    cout << result << endl;
    
    return 0;
}

