/*
Write a program that asks the user to enter any number other than and continues to do so 
until 5 is entered. If the user enters 5 display the message "Hey! you weren't 
supposed to enter 5!" and exit the program.
Optional requirements

    If the user still hasn't entered the number 5 after 10 iterations display the message 
    "Wow, you're more patient than I am, you win." and exit.

    Instead of always asking the user to enter any number other than 5, ask the user to enter any 
    number other than the number equal to the number of times they've been asked to enter a number. 
    (i.e on the first iteration "Please enter any number other than 0" and on the second iteration 
    "Please enter any number other than 1" etc...) The program must still behave accordingly 
    exiting when the user enters the number they were asked not to.
*/

#include <iostream>

using namespace std;

int main(){
    int Userinput;
    int Attempts = 1;
    cout << ("Please enter any number apart from 5: ") << endl;
    cin >> Userinput;
    if (cin.fail()){
        cout << ("Error - Wrong Input, Please enter any number that is not 5") << endl;
        return 0;
        //This wil show an error if the input type is wrong. 
    }
     if (Userinput == 5){
            cout << ("Hey! you weren't supposed to enter 5!") << endl;
            return 0;
    }
    /*if (Userinput == 5){
        cout << ("Hey! you weren't supposed to enter 5!") << endl;
    } */

    //if (Userinput == 5){
      //  cout << ("Hey! you weren't supposed to enter 5!") << endl;
   // }

        while (Attempts <= 10 ){
            cout << Userinput << endl;
            Attempts++;
            cout << ("Please enter any number apart from 5: ") << endl;
            cin >> Userinput;
            if (Attempts == 10){
                cout << ("Wow, you're more patient than I am, you win.") << endl;
                return 0;
            }
            if (Userinput == 5){
            cout << ("Hey! you weren't supposed to enter 5!") << endl;
            return 0;
    }

        }
    return 0;
    }
        

        //count++;
        


