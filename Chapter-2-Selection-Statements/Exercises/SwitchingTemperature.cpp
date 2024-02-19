/*
You should now have a complete working program that converts a given temperature from Fahrenheit to Celsius and vice versa, depending on which option (integer) the user enters (see previous chapter).

Revise your temperature converter to use a switch statement. T
he switch should test a char variable holding the characters entered by the user, 
e.g: Enter "f" to convert from Fahrenheit to Celsius Enter "c" to convert from Celsius to Fahrenheit

You should provide an appropriate default statement.
*/
#include <iostream>

using namespace std;

int main(){
    //So we need to write a program that will convert temp in fahrenheit to celsius
    //This is the double interger for the temp for fahrenheit. This can Only be a number.
    double Fahrenheit;
    double Celsius; // Double vs int? Double shows numbers with decimals and int as a whole number. We want double as its dealing with temp.
    char option;
    //I wanna give it a title. :)
    cout << "------------------Fahrenheit to celsius or celsius to Fahrenheit calculator!-----------------------------------" << endl;
    cout << ("Please enter an option: ") << endl;
    cout << ("F - To convert from Fahrenheit to Celsius") << endl;
    cout << ("C - To convert from Celsius to Fahrenheit") << endl;
    //I want the user to enter the fahrenheit.
    //So I will use cin as that is used to ask for the user input.
    //Before so I wanna tell the user what they need to enter. So it will be blank and the user will be confused.
    cin >> option;
    switch (option){
        //In this example I used a character as swich statments support them. It could also have a string.
        // A char is better as its short, less mistakes to happen and faster to work out the problem. 
        case 'f':
        case 'F':
        cout << "Please enter the Fahrenheit of the temputure: " << endl;
        cin >> Fahrenheit;
        //This is the calculation to convert your fahrenheit into celsius.

        Celsius = (Fahrenheit - 32.0) * 0.5556;
        cout << Fahrenheit<<(" Fahremheit is: " )<< Celsius << " Celsius."<< endl;
        break;
        case 'c':
        case 'C':
        cout << "Please enter the Celius of the temputure: " << endl;
        cin >> Celsius;
        Fahrenheit =  Celsius * 9/5 + 32;
        //15 °C = 15 × 9/5 + 32 = 59 °F
        cout << Celsius <<(" Celsius is: " )<< Fahrenheit << " Fahrenheit."<< endl;
        break;
        default:
        cout <<("Error: Program crashed - Wrong input!")<< endl;
        break;

    }
    return 0;

}