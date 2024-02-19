/*
Using the file randomStrings.txt
 write a program that outputs the total 
 number of lines in the program.
*/
#include <iostream>
#include <fstream> // Allow to create files, edit and delete. etc
#include <string>

using namespace std;
int main(){
    ifstream MyFile ("exercise-files/randomStrings.txt"); //Load the file.
    //stringLine;
    if (MyFile.is_open()){ //If the file is open do somthing,
        string line; //Set up line as a variable
        int count = 0; // Int count will be counting the line/
    while(getline(MyFile, line)){ //While loop to look for the lines in the document.
        count++; //Add one everytime
    } //Cout is what contains the number of lines. :)
    MyFile.close();
    cout << "The number of lines is: " << count << endl; // Print the number of lines
    }
    else{
        cout << "Error loading the file." << endl; //If the file is missing, corrupted. Display an error message/
    }
    return 0; 
    }
//Helpful site: https://www.w3resource.com/cpp-exercises/file-handling/cpp-file-handling-exercise-3.php