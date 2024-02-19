/*
The following code should calculate and display the mean of two variables of type double. 
Can you fix the function to make this work?
*/
#include <iostream>
using namespace std;

int mean (double a, double b) { //Int is used when it comes to calculations. 
    return (a + b) / 2.0; //I had to update to double as that is the data type in the main function. Void I dont think is a data type...
}
int main() {
    double numberA = 5;
    double numberB = 6;
    double result = mean(numberA, numberB); 
    cout << "a is " << numberA;
    cout << endl; //I hadded some lines to make it look nicer. :) More readable for us. :)
    cout << "b is " << numberB;
    cout << endl;
    cout << "The mean of a and b is: " << result;
    return 0;
}