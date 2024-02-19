/*
You are tasked to make an (almost) useless contraption that tells the
 user when they have entered either the number 1 or 2 to console.

When the user enters 1 the message “you have entered the number 1” 
should print to console, and when the user enters 2 the message 
“you have entered the number 2” should print to console. If the user 
enters any other number the program should end.

Hint: This can be solved by having two conditions in the while loop.
 You will also need an if statement within the loop.

*/

#include <iostream>
using namespace std; 
int main(){
    int Answer;
    cout << "Please enter 1 or 2: " << endl;
    cin >> Answer;
    while (Answer == 1 || Answer == 2 ){  // If both answer is 1 and 2 then do the action.
        cout << ("You have entered ") << Answer << endl;
        
        cout << "Please enter 1 or 2: " << endl; 
        cin >> Answer;
        continue;
        if (Answer != 1 || Answer != 2){ // If the answer is not 1 or 2. Exit the program. :)
            return 0;
        }
    }


}