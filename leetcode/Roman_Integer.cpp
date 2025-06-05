#include<bits/stdc++.h>
using namespace std;

int romantoint(string s){
    unordered_map<char , int> roman = {
        {'I' , 1},
        {'V' , 5},
        {'X' , 10},
        {'L' , 50},
        {'C' , 100},
        {'D' , 500},
        {'M' , 1000}
    };

    int total = 0;
    int n = s.length();

    for(int i = 0; i < n; i++){
        // Subtract if current value is less than next value;
        if(i < n-1 && roman[s[i]] < roman[s[i+1]]){
            total -= roman[s[i]];
        }
        else{
            total += roman[s[i]];
        }
    }
    return total;
}


int main(){

    string input;
    cout<<"Enter the roman number";
    cin >> input;

    cout <<" \n input :"<<romantoint(input)<<endl;
    return 0;
}