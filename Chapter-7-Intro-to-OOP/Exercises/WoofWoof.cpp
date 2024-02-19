/*
Write a program that declares a class which defines the characteristics of a dog. 
The program should instantiate two objects from this class and assign data to its members. 
Once these dog objects have been created output their details to the console
*/
#include <iostream>
using namespace std;
class Dog{ //A new class that will be called from the main function.
    public: // This will allow me to get access to the class from the main function.
    int age = 9; // Setting up three variables to use.
    string name = "Tommy The Foxy";
    string breed = "Labrador Retriever";
void PrintText(){ //New function to display text.
        cout << "The dog name is: " << Dog::name << endl;
        cout << "The dog breed is: " << Dog::breed << endl;
        cout << "The dog age is: " << Dog::age << endl;
    }
};
int main(){ // Will run first.
    Dog Number1; //Set up dog number
    Number1.PrintText(); // Use the dog number to call in the function printtext and print all the text.
    return 0; //Exit
}