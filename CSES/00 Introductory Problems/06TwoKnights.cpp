#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using pii = pair<lli,lli>;
#define INF 2e9+10;
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FORS(i,start,n) for(int i = start; i < n; ++i)

int main(int argc, char** argv){
    lli n;
    cin >> n;
    FORS(i,1,n+1){
        lli ans = 0;
        lli totalTile = i*i;
        lli allPossibility = totalTile*(totalTile-1);
        if(i == 1){
            ans = 0;
        }else if(i == 2){
            ans = 6;
        }else if(i == 3){
            ans = 28;
        }else if(i == 4){
            ans = 96;
        }else if(i >= 5){
            lli a = 4 * 2; //4 corner
            lli b = 8 * 3; //8 [4 corner] adjacent
            lli c = 4 * 4; //4 [4 corner] diagonal

            lli d = ((i-2)-2) * ((i-2)-2) * 8; //center (2tile border)
            lli e = ((i-2)-2) * 4 * 4; //outer border
            lli f = ((i-2)-2) * 4 * 6; //inner border

            lli nono = (a + b + c + d + e + f);
            ans = (allPossibility - nono)/2;
        }
        cout << ans << endl;
    }

    return 0;
}

