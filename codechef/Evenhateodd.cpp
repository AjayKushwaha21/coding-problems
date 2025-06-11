#include<bits/stdc++.h>   // good Problem
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int j;
        cin >> j; 

        vector<int> k(j);
        int even = 0, odd = 0;
        for(int i = 0 ; i < j; i++){
            cin >> k[i];

            if(k[i] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }

        if(j % 2 != 0){
            cout << "-1" <<endl;
            continue;
        }
        if(even == odd){
            cout <<"0"<<endl;
        }
        else if(even > odd){
            cout<<even - j/2<<endl;
        }
        else{
            cout << odd - j/2 <<endl;
        }
    }    
}