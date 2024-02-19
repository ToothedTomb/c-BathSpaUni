/*
Write a program that passes two Strings into a function called compareStrings.
 This function should test whether or not the two Strings have the same value. 
 If the Strings are equal, the function should return the boolean value TRUE to the main function, 
 otherwise it should return the boolean value FALSE. Finally, print whether the strings are the 
 same from the main function.
*/
#include <iostream>
using namespace std;
string compareStringsFunc(string Value1, string Value2){
    bool same = false;
    if (Value1 == Value2){ //If they are the same print they are the same. If the two strings are  true.
        cout << endl;
        same = true;
        cout << same << " " << "True." << endl;
        cout << "They are the same. :)" << endl;
    }
    else { //Print they are not not the same,.
        cout << endl;
        cout << same << " " << "False." << endl;
        cout << "They are not the same. " << endl;
    }
}
int main(){
    string value1;
    string value2;
    cout <<"Go compare!!!" << endl;
    cout << "Please enter the first text: " << endl;
    cin >> value1;
    cout << "Please enter the second text: " << endl;
    cin >> value2;
    string Overall = compareStringsFunc(value1, value2); //Use the value1 and value 2 to send to the function. 
    cout << Overall << endl; //Print if its true or not. The function will run the if statement.
    return 0; 
}