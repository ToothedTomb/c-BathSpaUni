/*
Declare a function called max_two that compares two numbers and RETURNS the maximum value 
back to the main program where it should be output. The program should obtain the values from 
the user in the main function and pass these to the function using appropriate parameter values.
*/

#include <iostream>
using namespace std;
int max_two(int Num1, int Num2){ // Function for finding the maxinum number from two numbers.
    return(max(Num1,Num2)); // Max is used to find out what the maximum number (Biggest number). 
    //I had somthing more advanced but in order for it to be good code. It needs to be made as simple as possible. 
}
int main (){ //Will always run First.
    int num1;
    int num2;
    cout << "Find the maximum number from 2 numbers: " << endl;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    int max = max_two(num1,num2); //Will set the num1 to Num1 in the function. 
    cout << "The maximum number of " << num1 << " and " << num2  << ": "<< endl;
    cout << max << endl; //Print out the max number. 
    return 0;
}
//The calculation for finding the maximum number: https://stackoverflow.com/questions/3357369/how-do-i-find-the-maximum-larger-greater-of-2-numbers
