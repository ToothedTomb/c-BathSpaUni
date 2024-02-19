/*
Write a function called sum that adds together three integers. 
You must obtain the values that will be added from the user within the
 main function before passing these values to your sum function. The 
 function should use the values it's passed to perform the desired calculation and output the result.
*/
#include <iostream>
using namespace std;
int sum(int Num1, int Num2, int Num3){ //Sum function
    return (Num1 + Num2 + Num3); //This will print out the answer. 

}
int main (){
    int Num1;
    int Num2;
    int Num3;
    cout << "Adding three numbers together! " << endl;
    cout << "Please enter your first number: " << endl;
    cin >> Num1; //Asking you to enter three numbers.
    cout << "Please enter your second number: " << endl;
    cin >> Num2;
    cout << "Please enter your third number: " << endl;
    cin >> Num3;
    cout << "The answer is: " << endl;
    int total = sum(Num1,Num2,Num3); // Declairing the numbers to add in the sun function.
    cout << Num1 << " + " << Num2 << " + " << Num3 << " = " << total << endl; // Print out the calculation.
    return 0;
}


