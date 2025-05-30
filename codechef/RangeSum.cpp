#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a , range_sum;
    cin >> a ;

    while(a--){
        long long left , right;
        cin >> left >> right;

        if(left > right){ //ranges can be swpped in testcases
            swap(left,right);
        }

        left = ((left-1) * left  ) / 2;
        right = (right  * (right + 1))/2;
        range_sum = right - left;
        cout << range_sum <<endl;
    }
}