/*
Write a program that asks the user to input their age. If 
the user enters data of an incorrect type (e.g. a letter) the 
program should keep asking them for their age until acceptable data is entered. 
You will find a helpful code snippet in the resources folder of your 
repository for this exercise (hint: cin.fail()).

Extension Problem (Optional):
Also reject unrealistic ages (e.g. under 0 and over 120). //One person lived over 120. 
So I will extened it
to 0 - 150.
*/
#include <iostream>
using namespace std;
int main(){
    int age;

    while (true){
    cout << ("Please enter your age: ") << endl;
    cin >> age;
    
    if (age < 150 && age >=1){
        cout << ("You are ") << age << (" Years old.") << endl;
        return 0;
    }
    else if (cin.fail()){
        cout << ("Error: Please enter the age from 0 - 150.") << endl << endl;
        cin.clear();  // Clear any error flags 
        cin.ignore();  // Discard invalid input meaning it will remove them. 
    }
    else {
        cout << ("Error: Please enter the age from 0 - 150.") << endl << endl;
        
    }

}
}

//Helpful site: https://stackoverflow.com/questions/5131647/why-would-we-call-cin-clear-and-cin-ignore-after-reading-input
