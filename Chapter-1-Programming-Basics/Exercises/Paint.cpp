#include <iostream>
#include <string>
using namespace std;
int main() {
    //consts are variables whose value cannot be modified later
    const int COVERAGE = 350; // paint covers 350 sq ft per gallon
    // declare integers length, width, and height
    int length;
    int width;
    int height;
    int door;
    int window;
    int doorCalc;
    int WindowCalc;

    // prompt for and read in the length of the room.
    cout << ("Please enter the length of the room: ") << endl;
    cin >> length;
    // prompt for and read in the width of the room
    cout << ("Please enter the width of the room: ") << endl;
    cin >> width;
    // prompt for and read in the height of the room
    cout << ("Please enter the height of the room: ") << endl;
    cin >> height;
    cout << ("How much windows do you have in your room? ") << endl;
    cin >> window;
    cout << ("How much doors do you have in your room? ") << endl;
    cin >> door;

    if (door <= 1){
        doorCalc = door * 20;
        //This hopefully will calcuate the ammount of total of swqaure feel with any door in the room.
    }
    
    if (window <=1){
        WindowCalc = window * 15;
    }

    // declare double totalSqFt;
    double totalSqFt = (length * width * height - doorCalc - WindowCalc);
    // declare double paintNeeded;
    double paintNeeded = totalSqFt / COVERAGE;
    // Compute the total square feet to be painted - think about   the dimensions of each wall assuming standard four wall room.
    // I will need to mutiliply the width and length together to get the answer.
    // Compute the amount of paint needed
    // Print the length, width, and height of the room, the total square feet and number of gallons of paint required
    cout << endl;
    cout << ("The lengeth of your room is: ")<< length << endl;
    cout << ("The hight of your room is: ")<< height << endl;
    cout << ("The width of your room is: ") << width << endl;
    cout << ("The total square feet is: ")<< totalSqFt << endl;
    cout << ("The number of door in your room: ") << door << endl;
    cout << ("The number of windows in your room: ") << window << endl;
    cout << ("Number of gallons of paint that is needed: ") << paintNeeded << endl;
    return 0;
}

//This is very tricky maths
// This website helped me with this exerice. https://www.omnicalculator.com/construction/wall-square-footage
/*
Part two:
Suppose the room has doors and windows that don’t need painting. Ask the user to enter the number of doors and number of windows in the room, and adjust the total square feet to be painted accordingly. Assume that each door is 20 square feet and each window is 15 square feet.

Part 2 can be added to the same project file as part 1  */
