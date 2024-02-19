/*
W. Reverse it
Write a program that finds the reverse of a number. For example:
Input: 12345
Output: 54321
*/
#include <iostream>
using namespace std;

int main(){
    int number;
    int reverse;
    cout << ("Number in reverse!!!") << endl;
    cout << ("Please enter a number: ") << endl;

    cin >> number; // Enter input
    while (number != 0){ // While its not zero
        int reversed = 0;
        reverse = reverse * 10 + number % 10; // Calculation to make the number reverse.
        number /= 10; // 2 
    }

    cout << "The number in reverse is: " << reverse << endl;
    return 0;
    } 
