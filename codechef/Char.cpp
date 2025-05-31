#include<bits/stdc++.h>
using namespace std;

int main(){
    char i;
    cin >> i;

    if(i >= 65 && i <= 90){ // total no of alphabet is 26 & difference between A ans a is 32.        
        i = i + 32;
        cout << (char)i;
    }
    else{
        i = i - 32;
        cout << (char)i;
    }
}

// using isupper and tolower or islower and toupper;

#include <iostream>
#include <cctype> // For isupper() and tolower()/toupper()
using namespace std;

int main() {
    char i;
    if (cin >> i) { // Check if input is valid
        if (isupper(i)) { // Check if uppercase
            cout << (char)tolower(i); // Convert to lowercase
        } else if (islower(i)) { // Check if lowercase
            cout << (char)toupper(i); // Convert to uppercase
        } else {
            cout << i; // Non-letter, output as is
        }
    } else {
        cout << "Invalid input" << endl; // Handle input failure
    }
    return 0;
}