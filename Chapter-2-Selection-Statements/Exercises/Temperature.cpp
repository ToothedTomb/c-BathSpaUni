/*
In chapter 1 you wrote a program to convert temperature in Fahrenheit to Celsius. 
Extend this program by having the computer ask the user the question shown below 
(with correct formatting!) and then complete the necessary steps:

Hello, please enter an option:    
'1': To convert from Fahrenheit to Celsius  
'2': To convert from Celsius to Fahrenheit  

Your program should display an appropriate warning message if the user does not 
enter a valid integer.
*/
#include <iostream>

using namespace std;

int main(){
    //So we need to write a program that will convert temp in fahrenheit to celsius
    //This is the double interger for the temp for fahrenheit. This can Only be a number.
    double Fahrenheit;
    double Celsius; // Double vs int? Double shows numbers with decimals and int as a whole number. We want double as its dealing with temp.
    int option;
    //I wanna give it a title. :)
    cout << "------------------Fahrenheit to celsius or celsius to Fahrenheit calculator!-----------------------------------" << endl;
    cout << ("Please enter an option: ") << endl;
    cout << ("1 - To convert from Fahrenheit to Celsius") << endl;
    cout << ("2 - To convert from Celsius to Fahrenheit") << endl;
    //I want the user to enter the fahrenheit.
    //So I will use cin as that is used to ask for the user input.
    //Before so I wanna tell the user what they need to enter. So it will be blank and the user will be confused.
    cin >> option;
    switch (option){
        case 1:
        cout << "Please enter the Fahrenheit of the temputure: " << endl;
        cin >> Fahrenheit;
        //This is the calculation to convert your fahrenheit into celsius.

        Celsius = (Fahrenheit - 32.0) * 0.5556;
        cout << Fahrenheit<<(" Fahremheit is: " )<< Celsius << " Celsius."<< endl;
        break;
        case 2:
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
