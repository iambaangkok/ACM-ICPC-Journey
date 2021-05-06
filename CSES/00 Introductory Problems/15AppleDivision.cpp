#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using pii = pair<lli,lli>;
#define INF 2e9+10
#define MOD (lli)(1e9+7)
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define FORS(i,start,n) for(int i = start; i < n; ++i)
#define FORSI(i,start,n, increment) for(int i = start; i < n; i += increment)

vector<lli> vec;

lli divideApples(lli i, lli pile1, lli pile2){
    if(i == vec.size())    {
        return abs(pile1-pile2);
    }
    return min(divideApples(i+1, pile1+vec[i], pile2), divideApples(i+1, pile1, pile2+vec[i]));
}

int main(int argc, char** argv){

    lli n;
    cin >> n;
    FOR(i,n){
        lli a;
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end(), greater<lli>());
    cout << divideApples(0,0,0) << endl;

    return 0;
}

