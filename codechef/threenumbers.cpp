#include<bits/stdc++.h>
using namespace std;

int main(){
    int k , s;
    int count = 0;
    cin >> k >> s;

    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            int t = s - (x + y);
            if(t >= 0 && t <= k ){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}