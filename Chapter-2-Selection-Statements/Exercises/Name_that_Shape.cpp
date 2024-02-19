/*
Write a program that determines the name of a shape from its number of sides. 
Read the number of sides from the user and then report the appropriate name as part of a meaningful 
message. Your program should support shapes with anywhere from 3 up to (and including) 10 sides. 
If a number of sides outside of this range is entered then your program should display an 
appropriate error message.

Helful site: https://www.mathsisfun.com/shape.html
*/

#include <iostream>
using namespace std;

int main (){
    int ShapeSides;
    cout << ("-----------------What is the shape? ----------------------------") << endl;
    cout << ("Only supports shape that has three sides to shape that has 10 sides.") << endl;
    cout << ("Please enter the number of sides the shape has: ") << endl;
    cin >> ShapeSides;
    //I love to use a switch statement as its faster then if statements and easier for people to read code.
    switch (ShapeSides){
        case 3:
        cout << ("The shape that has 3 sides is a Triangle!") << endl;
        break;
        case 4:
        cout << ("The shape that has 4 sides is a Square!") << endl;
        break;
        case 5:
        cout << ("The shape that has 5 sides is a Pentagon!") << endl;
        break;
        case 6:
        cout << ("The shape that has 6 sides is a Hexagon!") << endl;
        break;
        case 7:
        cout << ("The shape that has 7 sides is a Heptagon!") << endl;
        break;
        case 8:
        cout << ("The shape that has 8 sides is a Octagon!") << endl;
        break;
        case 9:
        cout << ("The shape that has 9 sides is a Nonagon!") << endl;
        break;
        case 10:
        cout << ("The shape that has 10 sides is a Decagon!") << endl;
        break;
        default:
        cout << ("Error - Please enter 3 - 10 sides!") << endl;
        break;

    }
    return 0;
}
