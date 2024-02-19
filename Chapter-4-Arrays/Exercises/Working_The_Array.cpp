/*
Write a program that will prompt the user to input ten integer values and store these into an array. 
Now do the following

    Output all the values in the array after the user has inputted their values done
    Print the sum of all values in the array. done
    Print the average of the values in the array. done :)

Extension Problem - Lets do this. :)
    Make the program print the smallest and greatest numbers in the array.
    Output array in ascending, then descending order
*/
#include <iostream>
using namespace std;
int main(){
    int limit;
    int total;

    cout << "Please enter your number of values you want in the array: " << endl;
    cin >> limit; 
    int Value[limit];

    for (int i = 0; i < limit; i++){
        int userInput;
        cout << "Please enter a value: " << endl;
        cin >> userInput;
        Value[i] = userInput;
        total += Value[i]; // This will add all the values together. :)
    }
    cout << "Numbers that has been saved to the array: " << endl;
    for (int i = 0; i < limit; i++){
        cout << Value[i] << " ";
    }
    cout << endl;
    cout << "Numbers backwards: "<< endl;
    for (int i = limit - 1; i >= 0; i--){
        cout << Value[i] << " ";
    }
    cout << endl;
    cout << "Adding the numbers up: " << endl;
    cout << total << endl;
    int Size = sizeof(Value) / sizeof(Value[0]);
    cout << "The average number is: " << endl;
    cout << total / Size << endl;
    int Calc = Value[limit];
    int Biggest= Value[0];
    int Smaller= Value[0];
    for (int i = 0; i < limit; i++){
        if (Value[0] > Value[i]){
            Smaller = Value[i];
        }    
        if (Value[0] < Value[i]){
            Biggest = Value[i];
        }    
    }
    cout << endl;
    cout << "The largest number is: " << Biggest << endl;
        


    cout << "The smallest number is: " << Smaller << endl;

    return 0;
    
}
//Helpful sites:
//https://www.programiz.com/cpp-programming/examples/array-largest-element
//https://stackoverflow.com/questions/47684980/for-loop-to-arrange-numbers-in-ascending-order-error-pointer-and-integer-co
