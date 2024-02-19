/*
In this exercise you will create a program that reads a letter of the alphabet from the user. 
If the user enters a, e, i, o or u then your 
program should display a message indicating that the entered letter is a vowel.
 Any other letter should display a message indicating the entered letter is a consonant

Extension Problem
Have your program handle other character inputs - 
e.g. provide appropriate messages for numbers or special characters like @, !, # etc. 
Hint look up “isalpha c++” and “isdigit c++” on google.
*/

#include <iostream>
#include <ctype.h> 
#include <stdio.h> 
//Two new libuaries that allows is digit and isalpha work.
using namespace std;

int main() {
    char input;
    cout << ("Please enter a character to determin if its a vowel, consonant and number:") << endl;

    cin >> input;
    //&& means all value needs to be true but || allows only one statement that needs to be true. 
    if ((input == 'a') || (input =='e') || (input =='i' ) || (input == 'o') || (input == 'u') || (input == 'A') || (input == 'E') || (input == 'I') || (input == 'O') || (input == 'U') ){
        cout << ("The letter is a ") << ("Vowel.") << endl;
        return 0;
    }
    else if (isdigit(input)){
        //Isdigit is used to ask the computer if the user enters a number for example 1 to 53453.
        cout << ("This is a number.") << endl;
    }
    else if (isalpha(input)){
        //Isalpha check for letters. As it read this code like a book, if it does not find it as a vowel
        // It will report it as a consonant. Its a book for the computer. 
        cout << ("This is a ") << ("Consonant.") << endl;
    }
    else {
        cout << ("This is a ") << input  << (".")<< endl;
    } 
    return 0;
}
    /*else {
        cout << ("The letter is a ") << ("Consonant.") << endl;
        return 0;
    */
   
/*
https://www.geeksforgeeks.org/isdigit-function-in-c-cpp-with-examples/
*/