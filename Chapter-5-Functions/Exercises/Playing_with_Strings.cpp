/*
Write a program that asks for a user's first name and last name separately. 
The program should pass these strings to a function which returns 
the users full name as a single string. done

Next create another function that replaces every a, e, i , o, u 
with the letter z and returns the converted string done

Create a final function that reverses the user's name and returns the reversed string. done
*/
#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
string Replacement(string Firstname, string Secondname){
       for (char &c : Firstname) { // It will get all the letter and then replace them with z.
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { // You enter all the letters you wanna change. 
            c = 'z'; //THis is the letter it will change to. So Jon will be Jzn. Lol
        }}
        for (char &c : Secondname) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            c = 'z';
        }}
        cout << "You name is: " << Firstname << " " << Secondname << endl; 
}
string NameInReverse(string Firstname,string Secondname){
    //reverse(Firstname);
    //reverse(Secondname);
    reverse(Firstname.begin(), Firstname.end()); // This will just reverse our string.
    reverse(Secondname.begin(), Secondname.end());
    cout << "Your name is: " << Firstname << " " << Secondname<< endl;
}
string Names(string firstname, string secondname){
    cout << "Your name is: " << firstname << " " << secondname << endl;
    string NameinReverse = NameInReverse(firstname,secondname); 
    string replacement = Replacement(firstname, secondname);
}


int main(){
    string FirstName;
    string SecondName;
    cout << "Please enter your first name: " << endl;
    cin >> FirstName;
    cout << "Please enter your second name: " << endl;
    cin >> SecondName;
    string ShowName = Names(FirstName, SecondName);
}
