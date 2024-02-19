//Write a program to check whether a number is positive, negative or zero.
#include <iostream>

using namespace std;
int main (){
    int YourNumber;

    cout << ("-----------------------Check if the number is positive, negative or zero-----------------------") << endl;
    cout << ("Please enter your number: ") << endl;
    cin >> YourNumber;

    if (YourNumber <0){
        cout << YourNumber << (" is a negative number. ") << endl;
    }
    else if (YourNumber >0){
        cout << YourNumber << (" is a positive number. ") << endl;
    }
    else if (YourNumber == 0){
        cout << ("Your number is a zero (0).") << endl;
    }
    else {
        cout << ("Error - please put here a number!") << endl;
    }
    return 0;
}