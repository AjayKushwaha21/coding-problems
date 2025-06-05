#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin >> n;

    if(floor(n) == n){
        cout<< "int " <<static_cast<int>(n) <<endl;
    }
    else{
        long long integer_part = static_cast<int>(n);
        double decimal_part = n - floor(n);
        cout <<"float " <<integer_part <<" "<<decimal_part;
    }
}