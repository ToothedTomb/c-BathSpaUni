/*
The file sentences.txt has a list of string data. 
Create a program that finds out how many times the following sentence 
appears “Hello my name is Jake Hobbs”

*/

#include <iostream>
#include <fstream> // Allow to create files, edit and delete. etc
#include <string>

using namespace std;

int main(){
    ifstream MyFile ("exercise-files/sentences.txt"); //Load the file.
    //stringLine;
    if (MyFile.is_open()){ //If the file is open do somthing,
        string line = "Hello my name is Jake Hobbs"; //Set up line as a variable
        int count = 0; // Int count will be counting the line/
    while(getline(MyFile, line)){ //While loop to look for the lines in the document.
        if (line == "Hello my name is Jake Hobbs"){ // If the line has the sentence that is asked/
            count++; //Add one everytime if the text print "Hello my name is Jake Hobbs". 
        
        }
    
    } //Cout is what contains the number of lines. :)
    MyFile.close(); //Close the file. 
    cout << "The number of lines is: " << count << endl; // Print the number of lines
    }
    else{
        cout << "Error loading the file." << endl; //If the file is missing, corrupted. Display an error message/
    }
    return 0; 
    }