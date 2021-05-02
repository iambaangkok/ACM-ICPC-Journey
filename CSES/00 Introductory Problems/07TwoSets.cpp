#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using pii = pair<lli,lli>;
#define INF 2e9+10;
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FORS(i,start,n) for(int i = start; i < n; ++i)
#define FORSI(i,start,n, increment) for(int i = start; i < n; i += increment)

int main(int argc, char** argv){
    lli n;
    cin >> n;
    lli sumUntilN = ((n%2==0)? (n/2*(n+1)):(((n-1)/2)*(n)+(n)));
    if(sumUntilN%2 == 0){
        cout << "YES" << endl;
        if(n%2 == 0){
            cout << n/2 << endl;
            FORSI(i,1,n/2+1,2){
                cout << i << " " << n-i+1 << " ";
            }cout << endl;
            cout << n/2 << endl;
            FORSI(i,2,n/2+1,2){
                cout << i << " " << n-i+1 << " ";
            }cout << endl;
        }else{
            cout << n/2+1 << endl;
            FORSI(i,1,n/2+1,2){
                cout << i << " " << n-i << " ";
            }cout << endl;
            cout << n/2 << endl;
            FORSI(i,2,n/2+1,2){
                cout << i << " " << n-i << " ";
            }cout << n << endl;
        }
    }else{
        cout << "NO" << endl;
    }

    // 1 2 3 4 5 6 7 8 9 10

    return 0;
}

