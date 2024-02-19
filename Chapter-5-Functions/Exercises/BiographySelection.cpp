/*
Write a program that outputs the menu below and gets input from the 
user before returning the information from a function. You should display the menu 
via one function called displayMenu() and return the information via another 
function called bio(). The program should continue to ask the user for input until they select exit.
Pick an option
1. Show Name
2. Show Age
3. Show Hometown
4. Exit
*/
#include <iostream>
using namespace std;

int bio(int age,string Name, string Hometown, int Input){ //Will save all your records and display them.
    if (Input == 1){ // When user press 1, display name. 
        cout <<"Your name is: " <<  Name << endl;
    }
    else if (Input == 2){
        cout <<"Your age is: "<< age << endl;
    }
    else if (Input == 3) {
        cout <<"Your hometown is: "<< Hometown << endl;
    }
    else{
        cout << "Error --- Please enter an option from the list: " << endl;
    }
}
int displayInformation(int age, string Name, string Hometown){ //Will just load the menu but gets info from bio.
    int input;
    while(true){
    cout << "1) Show Name. 2) Show Age. 3) Show Hometown. 4) Exit." << endl;
    cin >>input;
    if (input == 4){ // If the input is 4 exit
        return 0; 
    }
    int info = bio(age, Name, Hometown,input);
    }
}
int main(){
    string Name;
    int age;
    string Hometown;
    cout << "Biography Selection: " << endl;
    cout << "Enter your name: " << endl;
    cin >> Name;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Enter your hometown: " << endl;
    cin >> Hometown;
    int menu = displayInformation(age, Name, Hometown); //Will load the menu.
}