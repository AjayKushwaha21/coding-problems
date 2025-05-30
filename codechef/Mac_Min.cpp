#include<bits/stdc++.h>
using namespace std;

int main(){
    long int a , b , c;
    cin >> a >> b >> c;

    long int mac , min;

    if (a >= b && a >= c){
        mac = a;
    }
    else if(b >= a && b >= c){
        mac = b;
    }
    else{
        mac = c;
    }
 
    //for minimum

    if (a <= b && a <= c){
        min = a;
    }
    else if(b <= a && b <= c){
        min = b;
    }
    else{
        min = c;
    }

    cout <<min<<" "<<mac;
}