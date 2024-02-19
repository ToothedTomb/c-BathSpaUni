/*
Write a program that uses nested for loops to print the following pattern to the console

*
**
***
****
*****

*/
#include <iostream>
using namespace std;

int main (){
    cout << "Rasing Stars, Five lines." << endl;
    for (int f= 5; f>=1; f--){ // Starts at 5 then finish at 1 which allow it to go from 1 star to 5 stars etc.

        for (int Stars=f; Stars<=5; Stars++){
            cout << ("*");
        }
    cout << endl;
    }
}