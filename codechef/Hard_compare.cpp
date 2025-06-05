#include<bits/stdc++.h>
using namespace std;

int main(){
    long double a, b, c, d;
    cin>> a>> b>> c>> d;

    long double first = b * log(a);   //pow(a , b);
    long double second = d * log(c);    //pow(c , d);

    if( first > second){
        cout <<"YES";
    }
    else
    cout <<"NO";

    return 0;

}