/*
The following programme uses the at() method to print each individual letter of a string (called myWord) to 
a new console line. string myWord = "Joe"; 
cout << myWord.at(0) << endl; 
cout << myWord.at(1) << endl; 
cout << myWord.at(2) << endl;

Output:

J
o
e

Using the at() method in combination with a for loop, rewrite the above program to avoid 
duplicating cout. Note string character counts start at 0 not 1!
*/
#include <iostream>
using namespace std;
int main(){
    string myWord = "Joe"; // The name
    int num1; // Will add one letter to the at. 
    for (num1;num1 <=3;  num1++){ // if its less then 3 add num1 and do the loop
        cout << myWord.at(num1) << endl; // Num1 for 3 would be  'e'. Meaning it will print out all the character
        //Without writing the code 10 times for it to display your name.
    }
    return 0;
}

