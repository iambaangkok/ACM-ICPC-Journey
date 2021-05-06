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

    lli nQueries;
    cin >> nQueries;
    FOR(i,nQueries){
        lli digit;
        cin >> digit;
        lli preDigit = digit;
        //lli num = 0;

        lli upToDigit = 0;
        lli upToNDigit = 0;
        lli nUsedNumber = 0;
        FORS(i,1,18+1){
            if(digit < upToDigit + 9*pow(10,i-1)*(i)){
                break;
            }
            upToDigit += 9*pow(10,i-1)*(i);
            upToNDigit = i;
            nUsedNumber += 9*pow(10,i-1);
        }

        cout << "upToDigit " << upToDigit << " nDigit " << upToNDigit << endl;
        digit -= upToDigit;
        cout << "digit " << digit << endl;
        lli number = digit/(upToNDigit+1);
        cout << "number " << number << endl;
        digit -= number*(upToNDigit+1);
        cout << "digit " << digit << endl;
        if(upToDigit!= 0){
            number += nUsedNumber;
        }else{

        }
        cout << "number " << number << endl;

        if(upToDigit == preDigit){
            cout << "h1" << endl;
            //cout << to_string(number) << endl;
            cout << to_string(number)[upToNDigit-1] << endl;
        }else if(digit == 0){
            cout << "h2" << endl;
            cout << to_string(number)[upToNDigit] << endl;
        }else{
            cout << "h3" << endl;
            number++;
            cout << to_string(number)[digit-1] << endl;
        }
        string str = "";
        for(lli i = 1; i <= 10000000; ++i){
            str += to_string(i);
            //cout << i << " " << floor(log10(i))+1 << endl;
        }
        cout <<  " str " << str[preDigit-1] << endl;
    }
    


    /*lli start = floor(log10(digit))-1;

    

    cout << start << endl;
    for(lli i = start ; i >= 0; i--){
        lli inc = 9*pow(10,i);
        digit -= inc;
        cout << inc << " " << digit << endl;
    }
    num = preDigit-digit;


    cout << num << " " << digit << endl;*/
    

    return 0;
}

