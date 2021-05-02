#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define INF 2e9+10;
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FOR2(i,start,n) for(int i = start; i < n; ++i)

int main(int argc, char* argv){

    string str;
    cin >> str;
    lli longest = 1;
    lli currLen = 1;
    FOR2(i,1,str.length()){
        if(str[i] == str[i-1]){
            currLen++;
            longest = max(longest,currLen);
        }else{
            currLen = 1;
        }
    }

    cout << longest << endl;

    return 0;
}

