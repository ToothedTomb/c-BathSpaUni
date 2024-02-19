/*
Positions on a chess board are 
identified by a letter and a number. 
The letter identifies the column, while the 
number identifies the row, as shown above

Write a program that reads a position from the user and 
use an IF statement(s) to determine if the column begins with a 
black or white square. 
For example, if the user enters a1 then your 
program should report that the square is black. 
If the user enters d5 then your program should report 
that the square is white.   
*/
#include <iostream>

using namespace std;

int main() {

    //variables declare.
    char LetterInput;
    int NumberInput;
    
    // Title:
    cout << ("Chessboard Checker by Jonathan Steadman!") << endl;
    cout << ("Please enter the Letter: ") << endl;
    cin >>  LetterInput;
    cout << ("Please enter the Number: ") << endl;
    cin >> NumberInput;
    
    // The first one goes through the same pattern as the first one. As its in a pattern, there is no need to add loads of if statements. It makes it short and more readable. 
    // Each letter has the same pattern. 
    //|| is or. So its a or B then it will run the action. :)
    if (LetterInput == 'a' || LetterInput == 'A' || LetterInput == 'c' || LetterInput == 'C' || LetterInput == 'E' || LetterInput == 'e' || LetterInput == 'g' || LetterInput =='G'){
        if ((NumberInput == 1) || (NumberInput == 3) || (NumberInput == 5) || (NumberInput == 7)){
            cout << LetterInput << NumberInput << " is a black square on the chessboard!" << endl;
         }
        else if ((NumberInput == 2) || (NumberInput == 4) || (NumberInput == 6) || (NumberInput == 8)){
            cout << LetterInput << NumberInput << " is a white square on the chessboard!" << endl;
        }
        else {
            cout << "Error - Please enter a number from 1 - 8! " << endl;
        }
    }
    //Its as the first one the same here but letters that got the same pattern that the second one on the chestboard. 
    else if (LetterInput == 'B' || LetterInput == 'b' || LetterInput == 'D' || LetterInput == 'd' || LetterInput == 'f' || LetterInput == 'F' || LetterInput == 'h' || LetterInput == 'H'){
        if ((NumberInput == 2) || (NumberInput == 4) || (NumberInput == 6) || (NumberInput == 8)){
            cout << LetterInput << NumberInput << " is a black square on the chessboard!" << endl;
        }
        else if ((NumberInput == 1) || (NumberInput == 3) || (NumberInput == 5) || (NumberInput == 7)){
            cout << LetterInput << NumberInput << " is a white square on the chessboard!" << endl;
        }
        else {
            //Wrong letter not within the length will be given an Error. 
            cout << "Error - Please enter a number from 1 - 8! " << endl;
        }
    }
    //If the letter is wrong it will display this error.
    else {
        cout << "Error - Please enter letters from A to H! " << endl;
    }
    return 0;

}