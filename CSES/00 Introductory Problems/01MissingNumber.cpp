#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define INF 2e9+10;
#define FOR(i,n) for(int i = 0; i < n; ++i)

int main(int argc, char* argv){

    lli n = 1;
    cin >> n;
    lli predictedsum = 0;
    lli realsum = 0;
    lli num;
    FOR(i,n-1){
        cin >> num;
        realsum += num;
    }

    predictedsum = ((n%2==0)? (n/2*(n+1)):(((n-1)/2)*(n)+(n)) );
    cout << predictedsum-realsum << endl;

    return 0;
}

