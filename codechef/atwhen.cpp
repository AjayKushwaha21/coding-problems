#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k ;

    if(k == 0){
        cout <<"21:00";
    }

    else if(k < 60){
        if(k < 10)
        cout <<"21:0"<<k;
        else
        cout <<"21:"<<k;
    }

    else{
        if(k == 60){
            cout <<"22:00";
        }
        else{
            int h = 21 + k/60;
            int m = k%60;
            
            if(m < 10){
                cout <<h<<":0"<<m;
            }
            else
            cout<<h<<":"<<m;
        }
    }
}