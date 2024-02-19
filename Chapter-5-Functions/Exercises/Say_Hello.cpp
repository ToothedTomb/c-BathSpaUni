/*
Write a function titled say_hello() that outputs to the screen "Hello".
 Modify the function so that it takes an integer argument and
 says hello the number of times equal to the value passed to it.
*/
#include <iostream>
using namespace std;
int say_hello(int Numbers){ //This function will print hello based on what value the user gives for number
    for (int i = 1; i <=Numbers; i ++){
    cout << "Hello." << endl;
    }}
int main(){
    int numberOftimes; 
    cout << "Type down how many times, you want the console to print - 'Hello':" << endl;
    cin >> numberOftimes;
    cout << endl << endl;
    int loop = say_hello(numberOftimes); // Do this function until the number in the value end the loop. 
    return 0;


}