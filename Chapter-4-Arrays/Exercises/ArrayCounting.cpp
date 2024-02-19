/*
Create an array that can hold ten integers, and fill it 
with numbers inputted by the user. Display those values on the screen, done
and then prompt the user for an integer. 
Go through the array, and count the number of 
times this number is found and print the result.
*/
#include <iostream>
using namespace std;
int main(){
    int TenNumbers[11];
    int Limit = 10;
    int value = 0;
    for (int i = 0; i <= Limit; i++){
        cout << "Please enter a value: " << endl;
        cin >> value;
        TenNumbers[i] = value;
        cout << TenNumbers[i]<< endl;
    }
    Limit = 10;
    cout << "Your Numbers are: " << endl;
    for (int i = 0; i < Limit; i++){
        cout << TenNumbers[i] << " ";
    }
    cout << endl;
    cout << "Please enter a number: " << endl;
    int YouNumberEntered;
    int total;
    cin >> YouNumberEntered;
    for(int d = 0; d < Limit; d++){
        if (YouNumberEntered == TenNumbers[d]){
            total+=1;
        }
    }
    cout << "You number " << YouNumberEntered << " has been found " << total << " times." << endl;
return 0;
}