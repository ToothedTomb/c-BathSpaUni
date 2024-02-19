/*
You are killing time in the middle of Bath city centre, waiting for your friend who is always late. 
You receive a text telling you how late they are going to be.

Write a program that follows the below rules:

    Scenario 1: Your friend is going to be another 15 minutes or more Result: If you have more 
    than 3 pounds in change, go buy a coffee, otherwise go for a walk around the town

 
    Scenario 2: Your friend is going to with you in less than 15 minutes
    Result: Sit in the park and wait (probably grumbling).

You will need to use a nested IF-ELSE statement to complete this task. 
Please print appropriate text to the console to describe the result of each scenario.
*/

#include <iostream>
using namespace std;
int main(){
double Your_Money;
char AnswerToCoffee;
char answertowalk; 
int HowLong;
cout << "You are killing time in the middle of Bath city centre, waiting for your friend who is always late. You receive a text telling you how late they are going to be!" << endl << endl;
cout << "How long will your friend be: " << endl;

cin >> HowLong;

if (HowLong >=15){
    cout << ("Please enter how much money, you have got: ") << endl;
    cin >> Your_Money;
    if (Your_Money >= 3){
        cout << ("You can afford to buy a Coffee. Would you like to buy Coffee? (Y/N)") << endl;
        cin >> AnswerToCoffee;
        if ((AnswerToCoffee == 'y') || (AnswerToCoffee == 'Y')){
            cout << ("You have gotten some coffee!") << endl << ("You took 12 minutes to drink coffee!") << endl;
            cout << ("Would you like to take a walk? ") << endl;
            cin >> answertowalk;
            if ((answertowalk == 'Y') || (answertowalk == 'y')){
            cout << ("You had coffee but you decided to go for a walk around the city.") << (" After your 14 minute walk, your friend arrives.") << endl;
            }
            else{
                cout << ("You have waited for your friend in the park. ") << endl;
            }
        }
        else if ((AnswerToCoffee == 'n') || (AnswerToCoffee == 'N') ){
            cout << ("You have decided to not to have coffee.") << (" would you like to walk around the city for five minutes?")  << endl;
            cin >> answertowalk;
            if ((answertowalk == 'Y') || (answertowalk == 'y')){
            cout << ("You did not want coffee but you decided to go for a walk around the city.") << (" After your 14 minute walk, your friend arrives.") << endl;
        }
            else if ((answertowalk == 'N') || (answertowalk == 'n')){
            cout << ("You did not want Coffee but you decided to sit on the bench in the park for 15 minutes. ") << endl; 
        }
        }
    }
    else if (Your_Money <= 3) {
        cout << ("You cant afford Coffee sadly as it costs £3 but you can go for a walk (enter Y) or sit on the bench (enter N): ") << endl;
        cin >> answertowalk;
        if ((answertowalk == 'Y') || (answertowalk == 'y')){
        cout << ("You cant afford to have coffee but you decided to go for a walk around the city.") << endl;
        cout << ("After the walk, you wait for your friend at the park for 1 minutes and they finally arrives!") << endl;
        }
        else if ((answertowalk == 'N') || (answertowalk == 'n')){
            cout << ("You cant afford to buy Coffee but you decided to sit on the bench in the par. ") << endl;
        }
    }
}
else if (HowLong < 15){
    cout << ("You are sitting down on the bench that is in the park, waiting for your friend!") << endl;
}
else {
    cout << ("Error: Invalid option, try again.") << endl;
}
}

//Update two - Fixed spelling issues. :)
