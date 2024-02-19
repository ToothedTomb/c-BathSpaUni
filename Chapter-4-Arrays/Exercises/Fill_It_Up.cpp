/*
Declare an integer array with enough space to store 10 values. 
Use a for loop to allow the user to enter the values for the array, 
then output freshly filled array.
*/

#include <iostream>
using namespace std;
 int main(){
    int Number[10];
    const int Amount = 10; // Cant be changed. :)
    cout << "This array can only store 10 values: " << endl;
    for (int i = 0; Amount > i; i++){
            int userInput;
            cin >>  userInput;
            Number[i] = userInput;

            //cout << Number[i] << endl;
        }
    cout << "The results: " << endl;
    for (int i= 0; i < Amount; i++){
    cout << Number[i] << " ";
    }
    return 0;
    }





