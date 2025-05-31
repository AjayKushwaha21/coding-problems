#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a, b, c, d, mul;
    cin >> a >> b >> c >> d;

    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;

    mul = a * b * c * d;
    long long digit = mul % 100;
    if (digit < 10){
        cout << 0 << digit;
    }
    else
    cout<< digit;
}