/*
Create a program that gets a number from the user then checks if the number is a prime number
*/

#include <iostream>
using namespace std;

int main(){
    int number;
    cout << ("Prime Numbers!!!") << endl;

    while (number == number){
        cout << endl;
        cout << ("Please enter a number: ") << endl;
        cin >> number;
        if (number %2 != 0){
        cout << "This is an even number: " << number << endl;
        }
        else{
            cout << "This is an ODD number: " << number << endl;
        }
        if (cin.fail()){
            cout << "Error - Please enter a valid number." << endl;
            cin.clear();
            cin.ignore();
            return 0;
        }
    }
}