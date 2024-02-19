/*
Use a while loop to find the power of a given number. 
So, for example, 2 to the power of 4 = 16. 
In this calculation the number 2 is called the base and the number 4 is 
called the exponent.
Your program should request the base and exponent from the user and compute the result.
*/
#include <iostream>
#include <math.h> // Allow me to use pow. 
using namespace std;

int main(){
    double base;
    double exponent;
    while (true){
        cout << ("Exponent calculator!!!!") << endl;
        cout << ("Please enter the base: ") << endl;
        cin >> base;
        cout << ("Please enter the exponent: ")<< endl;
        cin >> exponent;
        double Answer =  pow (base, exponent); // Pow is used to calculate the power of a number!

        cout << ("The answer is: ") << Answer << endl;

        if (cin.fail()){
            cout << ("You have exited from the program!!!") << endl;
            return 0; 
        }
    }
    return 0;
}
/*
Calulator == https://www.calculator.net/exponent-calculator.html?base=12&exponent=3&fresult=&x=Calculate
Help from == https://www.geeksforgeeks.org/power-function-c-cpp/

*/