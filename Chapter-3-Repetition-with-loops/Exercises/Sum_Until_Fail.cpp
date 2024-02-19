/*
Write a program that allows the user to quickly sum a bunch of integers and then displays 
the result if a digit is not entered. For example:
User enters in console:
5
6
3
eggs
Result:
The sum of those numbers is 14
Notice that the program ignored "eggs".
*/

#include <iostream>
using namespace std;

int main (){
    int Number;
    int total;
    cout << "Sun until fail!!!!" << endl; // Title
    while(true){ // While the program running/
        cin >> Number; // Enter the number.
        total += Number; // Add each number entered to the console.
        if (cin.fail()){ // If the number is not a number display the results.
            cout << ("The total is: ") << (total) << endl;
            cin.clear(); // This will clear all errors.
            cin.ignore(); // Ignore all errors.
            return 0; //Exit the program.
        }
    
    }
    return 0;
    
    

}