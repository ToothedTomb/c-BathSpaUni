/*
Write a program that asks the user for a name and a greeting within the main function and 
stores these in appropriate variables. The program should then pass these variables to a 
function which concatenates the values and RETURNS the newly formed string back to the main 
program where it should be output.
*/
#include <iostream>
#include <functional>
using namespace std;

string greetingsFunc(string userName,string greetings){ //Greating function.
  //cout << greetings << endl;
  //return (userName,greetings);//return newly formed string
  return (greetings + ", " + userName);
}

int main(){
  string userNameInput;//declare variable to store userName
  string greetingsInput;//declare variable to store greeting

  cout << ("Please enter your name? ") << endl;//ask user for name input
  cin >> userNameInput;//store input

  cout << ("Please enter your greeting. ") << endl;//ask user for greeting input
  cin >> greetingsInput;//store input

  string greetings = greetingsFunc(userNameInput,greetingsInput); //invoke function and assign returned value to string variable
  cout << endl << endl;
  cout << greetings << endl << endl;//output the greeting

  return 0;
}