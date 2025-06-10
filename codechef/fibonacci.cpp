#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;

    long long first = 0, second = 1, third;
    if (n == 1){
        cout << 0;
    }

    else if(n == 2){
        cout << 1;
    }

    else{
        while( n > 2){
        third = first + second;
        first = second;
        second = third;
        n--;
        }
        cout << third;
    }
    return 0;
}