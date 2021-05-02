#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define INF 2e9+10;
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FORS(i,start,n) for(int i = start; i < n; ++i)

int main(int argc, char* argv){

    lli n = 1;
    cin >> n;
    lli count = 0;
    lli num;
    lli prevNum;
    cin >> prevNum;
    FORS(i,1,n){
        cin >> num;
        if(prevNum > num){
            count += prevNum-num;
        }else{
            prevNum = num;
        }
        
    }

    cout << count << endl;

    return 0;
}

