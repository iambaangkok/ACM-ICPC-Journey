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
    lli tests;
    cin >> tests;

    FOR(i,tests){
        lli a,b;
        cin >> a >> b;
        lli mx = max(a,b);
        lli mn = min(a,b);
        if((a+b)%3 != 0 or mx - mn > mx){
            cout << "NO" << endl;
        }else{
            lli diff = mx-mn;
            mx -= 2*diff;
            mn -= diff;
            if(mn >= 0 and mx >= 0 and (a+b)%3 == 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }


    
    return 0;
}

