/*
You are an inexperienced hacker trying to find the correct passcode to enter a safe. 
Write a programme that defines the correct passcode of 246, and allows users to enter passcode 
attempts until they reach the correct number.

Your programme should use a while loop to allow the user to keep entering passcode attempts until 
correct, and should use a break statement to exit the loop once the correct pass code is entered.

Hint: the condition of your while loop should be true e.g. while(true) meaning 
you should break out of it when the user successfully enters the correct passcode.s

*/
#include <iostream>

using namespace std;

int main(){
    double passcode;

    while (passcode == passcode){
    if (passcode != 246){     
        cout << ("Please enter the passcode: ") << endl;
        cin >> passcode;
        continue;
    }
    else{
     cout << ("You now gotten access!!!") << endl;
    return 0;
    }}
    return 0;

}