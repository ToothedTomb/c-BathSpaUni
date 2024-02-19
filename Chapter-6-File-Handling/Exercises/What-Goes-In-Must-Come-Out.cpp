/*
Write a program that creates a file called “bio.txt” and insert the following
 information to the file (data should be input by the user):
    Name
    Age
    Hometown
Each piece of data should be on a new line
Once the data has been written, read it back in from the file and output to the console.
*/
#include <iostream> 
#include <fstream> //Allows to use files to output text or to write to a text document and save data.
using namespace std;

int main(){
    string name;
    int age;
    string Hometown;
    ofstream MyFile("bio.txt"); // This will create a new file. :)
    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Please enter your age: " << endl;
    cin >> age;
    cout << "Please enter your Hometown: " << endl;
    cin >> Hometown;
    cout << "Making a new document bio.txt..." << endl; 
    MyFile << "Your name is: " << name << endl; // This will set the text and save the variable to the text document.
    //So it will be "Your name is: Jon" e.g
    MyFile << "Your age is: " << age << endl;
    MyFile << "Your hometown is: " << Hometown << endl;
    return 0;
}

//Helpful: https://www.w3schools.com/cpp/cpp_files.asp
