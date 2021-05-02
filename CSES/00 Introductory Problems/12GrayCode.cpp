#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using pii = pair<lli,lli>;
#define INF 2e9+10
#define MOD (lli)(1e9+7)
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FORS(i,start,n) for(int i = start; i < n; ++i)
#define FORSI(i,start,n, increment) for(int i = start; i < n; i += increment)

bitset<16> numToBit(lli num){
    bitset<16> b(num);
    return b;
}

string numToBitString(lli num, lli bit){
    return numToBit(num).to_string().erase(0,16-bit);
}

string binaryToGrey(string bin, lli bit){
    string grey = numToBitString(0,bit);
    grey[0] = bin[0];
    FORS(i,1,bit){
        if(bin[i] == bin[i-1]){
            grey[i] = '0';
        }else{
            grey[i] = '1';
        }
    }
    return grey;
}

int main(int argc, char** argv){

    lli n;
    cin >> n;
    lli maxnum = pow(2,n)-1;
    lli num = 0;
    FOR(i,maxnum+1){
        cout << binaryToGrey(numToBitString(i,n),n) << endl;
    }


    return 0;
}

