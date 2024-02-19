/*
Write a program that asks for the user’s name and age, before passing that information into a
 function called canVote. 
This function should test if the user is 18 years old or older.

If the user’s age is greater than or equal to 18, the function 
should then return the String “xxx can vote” to the main function, 
where xxx is the name inputted by the user.

If the user’s age is less than 18, the function should retur
n “Too young to vote” to the main function. Finally, print the 
returned String from the main function.
*/
#include <iostream>
using namespace std;
int canVote(int age){ //Function to see if they can vote.
    if (age >= 18){ // If age is bigger or equal to 18 print a good message.
        cout << " can vote. :)" << endl; 
    }
    else { // If they are below 18 print a sad message. 
        cout << " too young to vote. :(" << endl;
    }
    return 0;
}
int main(){
    int age;
    string name;
    int CanI;
    cout << "Can I vote or not? " << endl;
    cout << "Please enter your name: "<< endl;
    cin >> name;
    cout << "Please enter your age: " << endl;
    cin >> age;
    cout << name;
    CanI = canVote(age); //Will run the function and find out if they can vote. It will print a messge based on the number given.
    return 0; 
}