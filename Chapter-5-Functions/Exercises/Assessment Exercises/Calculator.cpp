/*
Write a program that allows the user to add, subtract, multiply
and divide two numbers. The program should adhere to the following specification.

    The calculations should be performed by functions outside of the programs main function.
    You should present the user with a menu that allows them to select which calculation they
    would like to make (done)
    The user should be able to enter the values required by the calculation which
    should be passed as function arguments to the relevant calculation (done)
    The function performing the calculation should then return the result back to the
     main function where it should be output. (done)

Optional Requirements

    Allow the user to continue performing different calculations until they decide to
    quit the program. done.
    Provide error messages if the user enters invalid data (e.g. letters not numbers).
    When you press a letter the software will stop.
*/
#include <iostream>
using namespace std;

void Add() { // This function will do the adding calculations.
    int Num1;
    int Num2;
    //num1 + num2;
    cout << "Please enter the first number: " << endl;
    cin >> Num1;
    cout << "Please enter the second number: " << endl;
    cin >> Num2;
    cout << Num1 << "+" << Num2 << " = " << Num1 + Num2;
}
void Subtract() { // This function will do the sutraction calculations.
    int Num1;
    int Num2;
    //num1 - num2;
    cout << "Please enter the first number: " << endl;
    cin >> Num1;
    cout << "Please enter the second number: " << endl;
    cin >> Num2;
    cout << Num1 << "-" << Num2 << " = " << Num1 - Num2;
}
void Multiply() { //This function will multiply calculations.
    int Num1;
    int Num2;
    //num1 * num2;
    cout << "Please enter the first number: " << endl;
    cin >> Num1;
    cout << "Please enter the second number: " << endl;
    cin >> Num2;
    cout << Num1 << "*" << Num2 << " = " << Num1 * Num2;
}
void Divide() { // This function will divide calculations.
    int Num1;
    int Num2;
    //num1 / num2;
    cout << "Please enter the first number: " << endl;
    cin >> Num1;
    cout << "Please enter the second number: " << endl;
    cin >> Num2;
    cout << Num1 << "/" << Num2 << " = " << Num1 / Num2;
}

int main() { // The one that will loop as it calls the function and will be the first to run. 
    do { // Will run in a loop.
        int calculateOptions;
        cout << endl;
        cout << endl;
        cout << "Calculator: " << endl;
        cout << "Please select what you want to do: " << endl;
        cout << "1) Add. 2) Subtract. 3) Multiply. 4) Divide. 5) Exit" << endl;
        cin >> calculateOptions;
        if (calculateOptions == 1) { //When you press a number it will do the calculation for example 1 = add
            cout << endl;
            Add();
        }
        else if (calculateOptions == 2) {
            cout << endl;
            Subtract();
        }
        else if (calculateOptions == 3) {
            cout << endl;
            Multiply();
        }
        else if (calculateOptions == 4) {
            cout << endl;
            Divide(); // Calling in the function.
        }
        else if (calculateOptions == 5) {
            return 0;
        }
        else { // If the number is not on the list. Display an error. 
            cout << endl;
            cout << ("Error- Please select from the list. ") << endl;
        }

    } while (true); //Now the user needs to press 5 in order to exit from the program. 
    return 0;
}
