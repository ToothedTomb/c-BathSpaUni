/*
Create an array holding these numbers: {1, 2, 3, 4, 5, 6}. Write a program that asks for an 
index and a number. Then it inserts the number at the indicated index of the array, and moves each 
element after the selected index forward one place (with the last number dropping off 
the end and disappearing).
*/

#include <iostream>
using namespace std;
int main (){
    int Numbers[6] ={1,2,3,4,5,6};
    int index;
    int Number; 
    cout << "Please enter the index: " << endl;
    cin >> index;
    if (index <= 6){
        cout << "Please enter the Number: " << endl;
        cin >> Number;
    }
    else {
        cout << "The index must be 6 or less. " << endl;
    }
    for (int i = 0; i > index; i++){ // This will add the number to the index and remove the prvious index number.
        if (index == Numbers[i]){
            Numbers[i] = Numbers[i -1];

        }
    }
    cout << "The answer is: " << endl;
    Numbers[index] = Number;
    for (int i = 0; i < 6;i++){
        cout << Numbers[i] << " "; // Outputing the array variable all numbers.
    }
    return 0; 
}