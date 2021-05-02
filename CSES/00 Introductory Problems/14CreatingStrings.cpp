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

    string str;
    cin >> str;
    sort(str.begin(), str.end());

    lli count = 1;
    while(next_permutation(str.begin(),str.end())){
        count++;
    }

    cout << count << endl;
    sort(str.begin(), str.end());
    cout << str << endl;
    while(next_permutation(str.begin(),str.end())){
        cout << str << endl;
    }

    return 0;
}

