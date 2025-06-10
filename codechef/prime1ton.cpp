#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    for(int i = 2; i <= n; i++){
        bool f = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                f = false;
                break;
            }
        }
        if(f){
            cout << i <<" ";
        }
    }
    return 0;
}