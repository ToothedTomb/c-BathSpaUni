/*
Write a simple search engine that tests if a string is present in a string array. 
The array you need to declare should be initialised with the following values 
"Lee" "John", "Sam", "Coral", "Ron", "Jake". The string you are searching for is "Sam"

The program should output all the values in the array then output which position in
 the array the search term can be found at.
Extension Problem
Allow the user to enter the string to be searched for.
*/

#include <iostream>
using namespace std;
int main(){
    string Names[6] = {"Lee","John", "Sam", "Coral", "Ron", "Jake"};
    string nameEnter;
    cout << "All of the names: " << " Lee, John,Sam, Coral, Ron and Jake. " << endl;
    cout << "Please enter a name: " << endl;
    cin >> nameEnter;
    int NumNameEntered;
    int value = 6;
    int position = -1;
    bool Started = false;

    for (int i = 0; value > i; i++){
        if (nameEnter == Names[i]){
            for (i = i; value >i;i++){
                if (nameEnter == Names[i]){
                Started = true;
                position = i;
                }
            }
        }
        if (Started == true){
            cout << "The name: " << nameEnter << " is at " << position << " of the array!" << endl;
        }}
        if (Started == false){
            cout << "The name: " << nameEnter << " is NOT FOUND." << endl;
        }
return 0;
    }

