/*
Using a nested for loop write a program that outputs the 1 - 12 times table.

*/

#include <iostream>
using namespace std;
int main(){
    int Mult1;
    int Mult2;
    cout << "Times table from 1 - 12!" << endl;
    for (Mult1 = 1; Mult1<=12; Mult1++){
        cout << endl;
        cout << Mult1 << " Times table!" << endl << endl;
        for (Mult2 = 1; Mult2<=12; Mult2++){
            cout << Mult1 << " X " << Mult2 <<" = " << Mult1 * Mult2 << endl;
        }
    }
    cout << endl;
}

//Easy lol