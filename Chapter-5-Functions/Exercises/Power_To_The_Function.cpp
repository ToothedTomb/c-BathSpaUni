/*
Write a function that calculates powers. 
It should ask for a base and an exponent, 
then return the result to be printed.
*/
#include <iostream>
#include <math.h>
using namespace std;
int Power(double Base, double Exponent){
double result = pow(Base, Exponent); //Pow just find the powers of the base and the exponent. Its included in the math.h libuary. Which makes maths a lot easier. 
cout <<"The answer is: "<< result << endl;
}
int main(){
    double Base;
    double Exponent;
    cout << "Power to the function!!!" << endl;
    cout << "Enter the base number: " << endl;
    cin >> Base;
    cout << "Enter the exponent number: " << endl;
    cin >> Exponent;
    double result = Power(Base, Exponent);

}