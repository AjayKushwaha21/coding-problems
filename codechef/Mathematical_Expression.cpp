#include<bits/stdc++.h>
using namespace std;

int main(){
    int A ;
    cin >> A;

    char S;
    cin >> S;

    int B;
    cin >> B;

    char Q;
    cin >> Q;

    int C;
    cin >> C;

    if( S == '+'){
        if(A + B == C)
        cout << "Yes";
        else
        cout << A + B;
    }
    else if( S == '-'){
        if(A - B == C)
        cout << "Yes";
        else
        cout << A - B;
    }
    else{
        if(A * B == C)
        cout << "Yes";
        else
        cout << A * B;
    }
}