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
    vector<lli> letters(26,0);

    FOR(i,str.length()){
        letters[str[i]-'A']++;
    }
    str = "";
    lli nOdd = 0;
    lli nEven = 0;
    FOR(i,26){
        if(letters[i]%2 == 0){
            nEven++;
        }else{
            nOdd++;
        }
    }

    if(nOdd > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }else{
        FOR(i,26){
            if(letters[i]%2 == 0){
                FOR(j,letters[i]/2){
                    str += 'A' + i;
                }
            }else{
                //wait
            }
        }

        FOR(i,26){
            if(letters[i]%2 == 0){
                // dont care
            }else{
                FOR(j,letters[i]){
                    str += 'A' + i;
                }
            }
        }

        for(int i = 26-1; i >= 0; i--){
            if(letters[i]%2 == 0){
                FOR(j,letters[i]/2){
                    str += 'A' + i;
                }
            }else{
                //wait
            }
        }
    }

    cout << str << endl;
    
    return 0;
}

