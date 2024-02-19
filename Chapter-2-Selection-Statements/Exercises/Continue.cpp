#include <iostream>
using namespace std;
int main() {
    cout << "Would you like to continue? (Y/N): "; //ask for input
    char answer; //variable for user answer; // This needs to be char as its just one letter. :)
    cin >> answer;//get user input

    switch (answer) { //evaluate expression
        case 'Y': //case for Y
        case 'y':
            cout << ("Your game will now continue!") << endl; //cout message if user enters Y
            break; //break to end case
        case 'N': //case for N
        case 'n':
             cout << ("You game will not continue!") << endl; //cout message if user enters N
            break;
        default: //default case
            cout << ("Error - Please enter (Y/N)!") << endl; //default message if neither Y or N entered
            break;
    }
    return 0;
}