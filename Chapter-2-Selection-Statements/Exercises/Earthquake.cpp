/*
The table below contains earthquake magnitude ranges on the Richter scale and their descriptors.
Write a program that reads a magnitude from the user and displays the appropriate descriptor as
part of a meaningful message. For example, if the user enters 5.5 then your program should indicate
that a magnitude 5.5 earthquake is considered to be a moderate earthquake.
Magnitude 	Descriptor
Less than 2.0 	Mirco
//2.0 to less than 3.0 	Very Minor

//3.0 to less than 4.0 	Minor

//4.0 to less than 5.0 	Light

//5.0 to less than 6.0 	Moderate

//6.0 to less than 7.0 	Strong

//7.0 to less than 8.0 	Major

//8.0 to less than 10.0 	Great

More than 10.0 	Meteoric

By Jonathan Steadman
*/
#include <iostream>
using namespace std;
int main()
{
    double magnitude;
    // This needs to be a double in order to allow 8.1. :)
    cout << ("--------------------How dangerous is the earthquake? ---------------------------") << endl;
    cout << ("Please enter the magnitude of the earthquake: ") << endl;
    cin >> magnitude;
    //If the input is incorrect or contain any errors display an Error.
    if (cin.fail()) cout << ("Error - Please enter the earthquake magnitude! ") << endl;
    //There was a bug that it printed 0 and minor if text was given, so I used return 0 to exit the program lol. 
    if (cin.fail()) return 0; 

    // Enter input from the user.

    // This code is read like a book, so it will look at the first value and if thats not true then it will look a the other.
    if (magnitude < 3.0)
    {
        cout << ("The earthquake is very Minor: ") << magnitude << endl;
    }
    else if (magnitude < 4.0)
    {
        cout << ("The earthquake is Minor: ") << magnitude << endl;
    }
    else if (magnitude < 5.0)
    {
        cout << ("The earthquake is Light: ") << magnitude << endl;
    }
    else if (magnitude < 6.0)
    {
        cout << ("The earthquake is Moderate: ") << magnitude << endl;
    }
    else if (magnitude < 7.0){
        cout << ("The earthquake is Strong: ") << magnitude << endl;
    }
    else if (magnitude < 8.0){
        cout << ("The earthquake is Major: ") << magnitude << endl;
    }
    else if (magnitude < 10.0){
        cout << ("The earthquake is Great: ") << magnitude << endl;
    }
    else if (magnitude >= 10.0){
        cout << ("The earthquake is Meteoric: ") << magnitude << endl;

    }
    else{
        return 0;

    }
    return 0;
}
