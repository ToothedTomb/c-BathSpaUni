/*
Use your newly acquired knowledge of the for loop to complete the following tasks. 
Print all values to console in each case.

    Write a loop that counts up from 0 to 50 in increments of 1.
    Write a loop that counts down from 50 to 0 in decrements of 1.
    Write a loop that counts up from 30 to 50 in increments of 1.
    Write a loop that counts down from 50 to 10 in decrements of 2.
    Write a loop that counts up from 100 to 200 in increments of 5.

*/
#include <iostream>
using namespace std;

int main(){
    //Some Variable has been assigned.
    int count;
    int select;
    int x2 = 2;
    int x5 = 5;
    //This is the main menu, to ask the user what they wanna do. 
    cout << ("Counting program with loops.") << endl;
    cout << ("Please select an option:") << endl;
    cout << ("1) Write a loop that counts up from 0 to 50 in increments of 1.") << endl;
    cout << ("2) Write a loop that counts down from 50 to 0 in decrements of 1.") << endl;
    cout << ("3) Write a loop that counts up from 30 to 50 in increments of 1.") << endl;
    cout << ("4) Write a loop that counts down from 50 to 10 in decrements of 2.") << endl;
    cout << ("5) Write a loop that counts up from 100 to 200 in increments of 5.") << endl;
    cin >> select;
    cout << endl;
    //Start will just tell the user that the action is being completed.
    cout << ("START:") << endl;
//This is the same for the others. So if the user select the number one then it will do a for loop. It will in our case count from 0 - 50. 
//Wheras 2 count down. So for loops will ley up count up and down.
    if (select == 1){
        for(int count = 0; count <=50; count++){ 
            cout << count << " ";
        }
    }
    else if (select == 2){
        for (int count = 50; count >=0; count--){
            cout << count << " ";
        }
    }
    else if (select == 3){
        for (int count= 30; count <=50; count++){
            cout << count << " ";
        }
    }
    else if (select == 4){
        for (int count = 50; count >=10; count -= x2){
            cout << count << " ";
        }
    }
    else if (select == 5){
        for (int count = 100; count <=500; count += x5)
        cout << count << " ";
    }
    //If the selection is not in the list, display an error.
    else {
        cout << ("Error - Please select option 1 -5!") << endl;
        return 0;
    }
    return 0;
}