#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define FOR(i,n) for(int i = 0 ; i < n, ++i) 


int main(int argc, char* argv){

    lli n = 1;
    cin >> n;
    while(n != 1){
        cout << n << " ";
        if(n%2 == 0){
            n /= 2;
        }else{
            n *= 3;
            ++n;
        }
    }cout << 1 << endl;

    return 0;
}

