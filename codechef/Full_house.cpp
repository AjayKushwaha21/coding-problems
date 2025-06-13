#include<bits/stdc++.h>
using namespace std;
int main(){
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    int cards[5] = { A , B , C , D , E};
    int frek[14] = {0}; //leaving 0 index and using 1 to 13 cards.
    
    for(int i = 0; i < 5; i++){
        frek[cards[i]]++;
    }

    bool hasThree = false;
    bool hasTwo = false;

    for(int i = 1; i <= 13; i++){
        if(frek[i] == 3){
            hasThree = true;
        }
        else if(frek[i] == 2){
            hasTwo = true;
        }
    }

    if (hasThree && hasTwo) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}