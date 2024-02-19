#include <iostream>

using namespace std;

int main(){
    //So we need to write a program that will convert temp in fahrenheit to celsius
    //This is the double interger for the temp for fahrenheit. This can Only be a number.
    double Fahrenheit;
    double Celsius; // Double vs int? Double shows numbers with decimals and int as a whole number. We want double as its dealing with temp.
    
    //I wanna give it a title. :)
    cout << "------------------Fahrenheit to celsius-----------------------------------" << endl;
    //I want the user to enter the fahrenheit.
    //So I will use cin as that is used to ask for the user input.
    //Before so I wanna tell the user what they need to enter. So it will be blank and the user will be confused.
    cout << "Please enter the fahrenheit of the temputure: " << endl;
    cin >> Fahrenheit;
    if (cin.fail()) cout <<("Error: Program crashed - Wrong input!")<< endl; /*
    If you do not put a number the program will display an error and crash.*/
    //if (cin.fail()) return 0; // Return -0 will close the program. 
    //So once the user enter the fahrenheit. Do print out the calculation.
    //This is the calculation to convert your fahrenheit into celsius.

    Celsius = (Fahrenheit - 32.0) * 0.5556;

    cout << Fahrenheit<<(" Fahremheit is: " )<< Celsius << " Celsius."<< endl;

}
