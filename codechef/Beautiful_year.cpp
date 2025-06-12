#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k;
    cin >> k;

    for(long long i = k+1; i<= 10000; i++){
        long long j = i;
        int digit_1 = j % 10;
        j = j / 10;

        int digit_2 = j % 10;
        j = j / 10;

        int digit_3 = j % 10;
        int digit_4 = j / 10;

        if((digit_1 != digit_2) && (digit_1 != digit_3) && (digit_1 != digit_4) && (digit_2 != digit_3) && (digit_2 != digit_4) && (digit_3 != digit_4)){
            cout << i ;
            break;
        }
    }
    return 0;

}